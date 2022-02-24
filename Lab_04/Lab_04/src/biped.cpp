#include "biped.h"
//these voids only allow for the correct amount of legs to be lowered or raised
void Biped::raiseLeg(int legIndex) {
	if (legIndex > 0 && legIndex < kiNoLegs) {
		legs[legIndex].raise();
	}
}

void Biped::lowerLeg(int legIndex) {
	if (legIndex > 0 && legIndex < kiNoLegs) {
		legs[legIndex].lower();
	}
}