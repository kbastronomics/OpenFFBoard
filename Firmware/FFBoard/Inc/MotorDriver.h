/*
 * MotorDriver.h
 *
 *  Created on: Feb 1, 2020
 *      Author: Yannick
 */

#ifndef MOTORDRIVER_H_
#define MOTORDRIVER_H_

#include "cppmain.h"
#include "ChoosableClass.h"
#include "PersistentStorage.h"

class MotorDriver : virtual ChoosableClass{
public:
	MotorDriver();
	virtual ~MotorDriver();

	static ClassIdentifier info;
	const ClassIdentifier getInfo();


	virtual void turn(int16_t power); // Turn the motor with positive/negative power. Range should be full signed 16 bit
	virtual void stopMotor();
	virtual void startMotor();
	virtual void emergencyStop();

	virtual bool motorReady(); // Returns true if the driver is active and ready to receive commands
};

#endif /* MOTORDRIVER_H_ */
