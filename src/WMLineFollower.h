#ifndef WMLineFollower_H
#define WMLineFollower_H

#include "WMPort.h"

class WMLineFollower : public WMPort
{
public:
	WMLineFollower(void);
	WMLineFollower(uint8_t port);
	WMLineFollower(uint8_t pin1, uint8_t pin2);

	bool readSensor1Status();
	bool readSensor2Status();

	bool readEdgeSensor1Status();
	bool readEdgeSensor2Status();

	bool sensor1OnBlack();
	bool sensor2OnBlack();

	int readSensors(void);

	bool readSensorStatus(uint8_t sensorStatus);

private:
	volatile uint8_t sensor1Pin;
	volatile uint8_t sensor2Pin;
};

#endif
