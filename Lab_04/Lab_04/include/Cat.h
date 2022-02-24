#pragma once
#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "quadruped.h"

using namespace std;

//the cat subclass inherits from the quadruped class
class Cat : public Quadruped {
public:
	void speak();
};


#endif