#pragma once
#ifndef KANGAROO_H
#define KANGAROO_H

#include <iostream>
#include "biped.h"

using namespace std;

//the parrot subclass inherits from the biped class
class Kangaroo : public Biped {
public:
	void speak();
	/* this is a method overload, so when a string is used the void Kangaroo::event(string jumps) would be used,
	and when an int is used void Kangaroo::event(int food) would be used*/
	void event(string jumps);
	void event(int Eat);
};


#endif