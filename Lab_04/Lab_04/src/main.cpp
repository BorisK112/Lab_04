#include <iostream>

#include "Dog.h"
#include "Cat.h"
#include "Kangaroo.h"
#include "Parrot.h"

using namespace std;

//sets the values for the variables from the user's input
int Leaves = ' ';
int foodAmount = ' ';

int main() {

	//the variables are set to their classes
	Dog lassie;
	Cat garfield;
	Kangaroo jack;
	Parrot arie;

	//this sets how many legs are raised
	lassie.raiseLeg(2);
	garfield.raiseLeg(0);

	//this outputs the sound of the animal
	cout << "Lassie said: ";
	lassie.speak();
	cout << "Garfield replied: ";
	garfield.speak();
	cout << "Jack replied: ";
	jack.speak();
	cout << "Arie replied: ";
	arie.speak();
	cout << endl;

	//this asks the user for the amout of leaves the kangaroo wants to eat
	cout << "How many leaves does the kangaroo want to eat? ";
	cin >> Leaves;
	cout << endl;

	//here the method overload is used to print out the correct strings from their respective function
	cout << "Jack ";
	jack.event("jumps");
	cout << "And then ";
	jack.event(Leaves); //uses the user's input for the function
	cout << endl;

	//this takes in the user's input for the amount of seeds to be used in the function
	cout << "How many seeds does the owner take out of the bag? ";
	cin >> foodAmount;
	cout << endl;

	//the correct strings are printed out from the functions
	cout << "Arie ";
	arie.event("flies");
	cout << "And then ";
	arie.event(foodAmount);
	cout << endl;

	//the screen is paused to allow the user to read what is on the screen before the window is closed
	system("pause");

	return 0;
}