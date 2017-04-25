// ReturningByReference.cpp : Defines the entry point for the console application.
//

#include <iostream>

int x; //global variable
int& setX(); // function declaration look at & by Int as in same way with pointer!!

int main()
{
	
	std::cout << "Value of X B4 Function call: " << x << std::endl; // should this be eaqul to 0?
	setX() = 92; // function call on the left side
	std::cout << "X: " << x << std::endl;

	system("pause");
    return 0;
}
int& setX()
{
	return x; // returns the value to be modified
}
