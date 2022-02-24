#pragma once
#ifndef LEG_H
#define LEG_H

//this class is used in the quadruped class, which can then be used in in the orher subclasses
class Leg {
	//private cannot be used outside the class
private:
	bool bRaised;
	//public can be used outside the class
public:
	Leg();
	void raise();
	void lower();
};


#endif