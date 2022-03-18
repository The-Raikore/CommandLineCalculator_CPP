// CommandLineCalculator.cpp
// Raikore
// Created 3/17/2022

#include <iostream>

// The purpose of this program is to take 3 inputs from the user and apply the center binary operator to the first and third integer inputs.
int main()
{
	//First prompt user for first integer

	std::cout << "Please enter an integer\n";
	//use std::cin to receive input. Invalid inputs should default to zero. Store in int a

	int a{ };
	std::cin >> a;

	//Prompt user for either "+", "-", "/", or "*". If those are not recieved, repeat prompt;

	bool loopFlag{ true };

	char x{ };

	while (loopFlag) 
	{
		std::cout << "Please enter either + - / or *\n";
		std::cin >> x;
		switch (x) 
		{
			case ('+'): //note that this is comparing the numeric value of the char as given by its ASCII ID rather than the character itself. A pendantic thing, but important. Because of this, use of double quotes would fail as it does not take the literal ASCII value.
				std::cout << "Input recognized as addition\n";
				loopFlag = false;
				break;
			case ('-'):
				std::cout << "Input recognized as subtraction\n";
				loopFlag = false;
				break;
			case ('/'):
				std::cout << "Input recognized as division\n";
				loopFlag = false;
				break;
			case ('*'):
				std::cout << "Input recognized as multiplication\n";
				loopFlag = false;
				break;
			default:
				std::cout << "Input not recognized as + - / or *\n";
		}
	}

	//Prompt user for third input

	std::cout << "Please enter another integer\n";
	int b{ };
	std::cin >> b;

	switch (x) // see line 28
	{
		case ('+'):
			std::cout << a << "+" << b << " is " << a + b;
			break;
		case ('-'):
			std::cout << a << "-" << b << " is " << a - b;
			break;
		case ('/'):
			std::cout << a << "/" << b << " is " << a / b << " with remainder " << a % b;
			break;
		case ('*'):
			std::cout << a << "*" << b << " is " << a * b;
			break;
		default: // This should not happen and constitutes an error. Should be logically impossible.
			std::cout << "Error in switch evaluation in line 57: Exiting with code -1.";
			return -1;
	}

	return 0;
}