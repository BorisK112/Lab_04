#pragma once
#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "quadruped.h"

using namespace std;

//the dog subclass inherits from the quadruped class
class Dog : public Quadruped {
public:
	void speak();
};


#endif