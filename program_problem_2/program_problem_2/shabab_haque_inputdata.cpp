/*
Shabab Haque - 9/26/2017 1

Assignment Name - Take In Data

Display Data, Accept User Response, Display Changed Data
*/

// Libraries
#include <iostream>;
#include <conio.h>;
#include <math.h>;

// Namespaces 
using namespace std;

// Functions ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << " /n";
}

// MAIN
void main() {
	// Assign Variables
	int wood;
	float number;
	double grams;
	bool life_answer = false;
	char asdf;
	int num1, num2;
	int sum, divide, mult;

	// Ask Questions
	cout << "How much wood could a woodchuck chuck if a woodchuck could chuck wood? ";
	cin >> wood;
	cout << "Name a number between 0 and 1: ";
	cin >> number;
	cout << "How many grams are in a mg? ";
	cin >> grams;
	cout << "Do you know the answer to life? Y/N ";
	cin >> asdf;
	if (asdf == 'Y' || asdf == 'y') {
		life_answer = true;
	}
	 // Summary of Questions
	cout << "A woodchuck could chuck " << wood << " pieces of wood" << endl;
	cout << "The number you entered that was between 0 and 1 is " << number << endl;
	cout << "You think there are " << grams << " grams in a mg" << endl;
	cout << boolalpha << "You answered to the evaluation about the answer to life " << life_answer << endl;
	
	// Ask for Numbers
	cout << endl;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	sum = num1 + num2;
	divide = num1 / num2;
	mult = num1 * num2;

	// Display numbers
	cout << num1 << '+' << num2 << '=' << sum << endl;
	cout << num1 << '/' << num2 << '=' << divide << endl;
	cout << num1 << '*' << num2 << '=' << mult << endl;

	pause();
}