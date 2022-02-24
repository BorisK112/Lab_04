#pragma once
#ifndef BIPED_H
#define BIPED_H

#include "leg.h"

//all animals that walk on two legs are sublasses of this class
class Biped {
protected:
	static const int kiNoLegs = 2;
	Leg legs[kiNoLegs];
public:
	void raiseLeg(int legIndex);
	void lowerLeg(int legIntex);
	virtual void speak() = 0; //this can be used by the subclasses as it would change to the sound the specific animal makes

};


#endif