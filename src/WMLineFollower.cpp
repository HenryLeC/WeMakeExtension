#include "WMLineFollower.h"

WMLineFollower::WMLineFollower(uint8_t port)
{
	sensor1Pin = wmPort[port].pin1;
	sensor2Pin = wmPort[port].pin2;
	setInput(sensor1Pin);
	setInput(sensor2Pin);
}

WMLineFollower::WMLineFollower(uint8_t pin1, uint8_t pin2)
{
	sensor1Pin = pin1;
	sensor2Pin = pin2;
	setInput(sensor1Pin);
	setInput(sensor2Pin);
}

/// Reads sensor values and returns values according to the following table:
/// 0 (0b00) - Both sensors are white
/// 1 (0b01) - Sensor 1 is white, sensor 2 is black
/// 2 (0b10) - Sensor 1 is black, sensor 2 is white
/// 3 (0b11) - Both sensors are black
int WMLineFollower::readSensors(void)
{
	int state;
	bool stateS1 = readDPort(sensor1Pin);
	bool stateS2 = readDPort(sensor2Pin);
	state = ((1 & stateS1) << 1) | stateS2;
	return state;
}

/// Reads sensor values and returns true if state according to readSensors is equal to the given value
bool WMLineFollower::readSensorStatus(uint8_t sensorStatus)
{
	return (readSensors() == sensorStatus);
}

bool WMLineFollower::sensor1OnBlack()
{
	return readDPort(sensor1Pin);
}

bool WMLineFollower::sensor2OnBlack()
{
	return readDPort(sensor2Pin);
}

/// True is white, false is black
bool WMLineFollower::readSensor1Status()
{
	bool stateS1 = readDPort(sensor1Pin);
	return !stateS1;
}

/// True is white, false is black
bool WMLineFollower::readSensor2Status()
{
	bool stateS2 = readDPort(sensor2Pin);
	return !stateS2;
}

/// false is white, true is black
bool WMLineFollower::readEdgeSensor1Status()
{
	bool stateS1 = readDPort(sensor1Pin);
	return stateS1;
}

/// false is white, true is black
bool WMLineFollower::readEdgeSensor2Status()
{
	bool stateS2 = readDPort(sensor2Pin);
	return stateS2;
}