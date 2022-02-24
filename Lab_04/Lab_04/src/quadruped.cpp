#include "quadruped.h"

//these voids only allow for the correct amount of legs to be lowered or raised
void Quadruped::raiseLeg(int legIndex) {
	if (legIndex > 0 && legIndex < kiNoLegs) {
		legs[legIndex].raise();
	}
}

void Quadruped::lowerLeg(int legIndex) {
	if (legIndex > 0 && legIndex < kiNoLegs) {
		legs[legIndex].lower();
	}
}