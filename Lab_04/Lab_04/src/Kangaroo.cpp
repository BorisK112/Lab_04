#include "Kangaroo.h"
//function for the sound of the kangaroo
void Kangaroo::speak() {
	cout << "cough" << endl;
}
//function for the kangaroo's jump
void Kangaroo::event(string jumps) {
	cout << "jumps over the hedge" << endl;
}
//function for amount of leaves eaten by the kangaroo
void Kangaroo::event(int food) {
	cout << "eats " << food << " leaves from the bush" << endl;
}