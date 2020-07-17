# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
### Project Description

The objective of this project is to develop a PID controller with which a vehicle can be drivin a test track in simulation environment. The project was developed in C++ and was verified in the Udacity project workspace simulator.This project gives good insights on the effects of different parameters of PID on the final control.

A proportional–integral–derivative controller (PID controller) is a control loop mechanism employing feedback that is widely used in industrial control systems and a variety of other applications requiring continuously modulated control. A PID controller continuously calculates an error value as the difference between a desired setpoint (SP) and a measured process variable (PV) and applies a correction based on proportional, integral, and derivative terms (denoted P, I, and D respectively), hence the name.

### Project Compilation

The project code was build and compiled without errors by executing the following commands :
```
mkdir build && cd build
cmake .. && make
./pid    // Run the code
```

The project files are as mentioned below :
* main.cpp
* PID.cpp
* PID.h
* json.hpp


### Project Implementation

The project was implemented as was taught in the lesson. The source code in PID.cpp has the implementation. The method UpdateError() calculates the P,I and D errors from the CTE. The total error calculates the final error by using tuned coefficients.

```
void PID::UpdateError(double cte)
double PID::TotalError()
```
