#include "Parrot.h"

//function for the sound of the parrot
void Parrot::speak() {
	cout << "squawk" << endl;
}
//function for the parrot flying
void Parrot::event(string Fly) {
	cout << "flies through the window" << endl;
}
//function for the parrot eating an amount of seeds
void Parrot::event(int food) {
	cout << "eats " << food << " seeds from the owner's hand" << endl;
}
