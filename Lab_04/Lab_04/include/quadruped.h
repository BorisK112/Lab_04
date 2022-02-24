#pragma once
#ifndef QUADRUPED_H
#define QUADRUPED_H

#include "leg.h"

//all animals that walk on four legs are sublasses of this class
class Quadruped {
protected:
	static const int kiNoLegs = 4;
	Leg legs[kiNoLegs];
public:
	void raiseLeg(int legIndex);
	void lowerLeg(int legIntex);
	virtual void speak() = 0; //this can be used by the subclasses as it would change to the sound the specific animal makes

};




#endif
