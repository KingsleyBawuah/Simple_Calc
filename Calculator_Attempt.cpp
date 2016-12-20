// Attempt_Calculator.cpp : Defines the entry point for the console application.
// Attempt at making a basic calculator with user prompting and commands.


// include stdafx.h in Visual studio first otherwise get c2605 error
//#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;


int main()
{
	/* Prompt user for command */
	cout << "What would you like to do?" << endl
		<< "1 - Addition " << endl
		<< "2 - Multiplication" << endl
		<< "3 - Division" << endl
		<< "Press 9 to quit" << endl;

	//Now to accept input and point towards slected option
	string input;
	float first_number, second_number, product, sum, quotient;
	cin >> input;

        if (input == "1")
        {

            cout << "What's the first number?: " << endl;
            cin >> first_number;
            cout << "What's the second number?:" << endl;
            cin >> second_number;

            sum = first_number + second_number;
            cout << "The sum is " << sum << endl;
        }

            else if (input == "2")
            {

                cout << "What's the first number? " << endl;
                cin >> first_number;
                cout << "What's the second number" << endl;
                cin >> second_number;

                product = first_number * second_number;
                cout << "The product is " << product << endl;
            }

            else if (input == "3")
            {

                cout << "What's the first number? " << endl;
                cin >> first_number;
                cout << "What's the second number" << endl;
                cin >> second_number;

                quotient = first_number / second_number;
                cout << "The quotient is " << quotient << endl;
            }
            else if (input == "9")
            {
                return 0;
            }


        else
        {
            cout << "That is not a recognized command!";

	}
	
	
	/*{
	cin.get();
	return 0;
	/*
