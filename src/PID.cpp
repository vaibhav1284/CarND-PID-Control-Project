#include "PID.h"

#include <algorithm>

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp__, double Ki__, double Kd__) {
  Kp = Kp__;
  Ki = Ki__;
  Kd = Kd__;

  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;

  // Previous cte.
  prev_cte = 0.0;

  // Counters.
  counter = 0;
  errorSum = 0.0;
  minError = std::numeric_limits<double>::max();
  maxError = std::numeric_limits<double>::min();
}

void PID::UpdateError(double cte) {
  // Error in proportional
  p_error = cte;

  // Error in Integral error
  i_error += cte;

  // Error in Diferential
  d_error = cte - prev_cte;
  prev_cte = cte;

  // Total Error 	
  errorSum += cte;
  counter++;

  // Checking for minimum and maximum errors 	
  if ( cte > maxError ) {
    maxError = cte;
  }
  if ( cte < minError ) {
    minError = cte;
  }
}

double PID::TotalError() {
  return p_error * Kp + i_error * Ki + d_error * Kd;
}