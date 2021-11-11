#ifndef WMBoard_H
#define WMBoard_H

#include "WMPort.h"

#define NC (0)

/// Ports on standard QBot
/// 0 -  Left Motor
/// 1 -  Right Motor
/// 2 -  Head Lights
/// 3 -  Bottom Color Sensors
/// 4 -  Obstacle Avoidance Sensors
/// 5 -  Matrix LED
WMPin wmPort[6] =
	{
		{8, 6},	  // Left Motor
		{7, 5},	  // Right Motor
		{0, 4},	  // Head Lights
		{11, 12}, // Bottom Color Sensors
		{A2, A3}, // Obstacle Avoidance Sensors
		{A0, A1}, // Matrix LED
}

#endif
