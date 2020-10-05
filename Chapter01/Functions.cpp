#include <iostream>		// Standard library for IO operations. Need this to print to console.

using namespace std;	// Lets us write ` cout << "MyString" `, instead of ` std::cout << "MyString"`

int Square(int value)	// Functions must be declared before they are used. In this case Square must be declared before it is called in main
{
	return value * value;
}

int main() 
{
	int rootVal = 5;
	int sqrVal = Square(rootVal);

	cout << "The square of " << rootVal << " is " << sqrVal << "\n";

	return 0;			// Indicate to the system that main runned succesfully be rturning 0. Non zeror return means error
}


