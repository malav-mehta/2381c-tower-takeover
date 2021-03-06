#ifndef GLOBALS_H_
#define GLOBALS_H_

#include "pros/api_legacy.h"
#include <array>

// Defining ports for the Quadratic Encoder (for the tracking of wheel movements).
#define QUAD_TOP_PORT 1
#define QUAD_BOTTOM_PORT 2


// Declaring and initizalizing required motors and analog sensors.
pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor leftBack(12);
pros::Motor leftFront(11);
pros::Motor rightBack(19);
pros::Motor rightFront(20);
pros::Motor leftIntake(10);
pros::Motor rightIntake(15);
pros::Motor lift(14);
//pros::Motor center(16);
pros::Motor grip(1);
pros::ADIEncoder encoder(1, 2, false);
pros::ADIAnalogIn gyro('H');
pros::Imu inertial(21);

int origin = 0;
int secure = 0;
// Global and constant delay.
int delay = 20;

int stop = 0;
int start = 0;

int control = 4;
int toggle = 1;
int cancel = 0;

int rumble = 0;
int rumble2 = 0;
// Defining PID Params for the angler and the drivebase.
int speedup = 0;

std::array<double, 3> anglerPIDParams = {0.07, 0, 0};
std::array<double, 3> drivebasePIDParams = {0.032, 0, 0};

#endif