#ifndef WMBoard_H
#define WMBoard_H

#include "WMPort.h"

#define NC (0)

/// Ports on standard QBot
/// 0 -
/// 1 -
/// 2 -  Head Lights
/// 3 -  Bottom Color Sensors
/// 4 -  Obstacle Avoidance Sensors
/// 5 -  Matrix LED
/// 6 -
/// 7 - Right Motor
/// 8 - Left Motor
WMPin wmPort[9] =
{
	{0, 0},	  //
	{0, 0},	  //
	{NC, 4},  // Head Lights
	{11, 12}, // Bottom Color Sensors
	{A2, A3}, // Obstacle Avoidance Sensors
	{A0, A1}, // Matrix LED
	{NC, NC}, //
	{7, 5},   // Right Motor
	{8, 6}    // Left Motor
};

#endif
