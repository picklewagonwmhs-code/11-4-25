#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;
inline bool robot = false; // set to true if u are not using coding drivetrain

inline pros::Motor intake(5);
inline pros::Motor outake(-1);
inline ez::Piston match_loader('H');
inline ez::Piston descorer('A');

