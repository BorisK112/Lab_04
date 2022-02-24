#pragma once
#ifndef PARROT_H
#define PARROT_H

#include <iostream>
#include "biped.h"

using namespace std;

class Parrot : public Biped { //the parrot subclass inherits from the biped class
public:
	void speak();
	/* this is a method overload, so when a string is used the void Parrot::event(string Fly) would be used,
	and when an int is used void Parrot::event(int food) would be used*/
	void event(string Fly);
	void event(int Eat);
};


#endif