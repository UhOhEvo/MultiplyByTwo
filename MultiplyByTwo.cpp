// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB10
Project Name: Multiply by two
File Name: MultiplyByTwo.cpp
Description: capture user input into an array and multiply numbers by two
Limitations or issues: only using an int arrayy, no doubles
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	const int SIZE = 5;
	int numArray[SIZE]{};

	// Inform user what program does
	cout << "This program will ask you to enter 5 integer values.\n"
		<< "It will multiply those values by 2, then output the original\n"
		<< "values and multiplied values.\n"
		<< endl;

	// Prompt user to enter data needed by the program
	for (int count = 0; count < SIZE; count++)
	{
		cout << "Enter a value: ";
		cin >> numArray[count];			// user input for the values of the array 0-4 using count
	}	// end for loop
	cout << endl;

	cout << "You entered: ";

	for (int i = 0; i < SIZE; i++)
	{
		cout << numArray[i] << " ";		// displaying user input for the values of the array 0-4 using i
	}	// end for loop
	cout << endl;

	cout << "Multiplied by two: ";

	for (int index = 0; index < SIZE; index++)
	{
		numArray[index] *= 2;			// multiplying each number, 0-4 using index, by two
		cout << numArray[index] << " ";	// displaying each multiple value for each index
	}	// end for loop
	cout << endl;

	// A software algorithm would typically be executed after all data has been input


	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
 Proof 1:
 This program will ask you to enter 5 integer values.
It will multiply those values by 2, then output the original
values and multiplied values.

Enter a value: 5
Enter a value: 3
Enter a value: 2
Enter a value: 34
Enter a value: 44

You entered: 5 3 2 34 44
Multiplied by two: 10 6 4 68 88
Press any key to continue . . .

Proof 2:
This program will ask you to enter 5 integer values.
It will multiply those values by 2, then output the original
values and multiplied values.

Enter a value: -9
Enter a value: 3
Enter a value: 98
Enter a value: 10
Enter a value: -1

You entered: -9 3 98 10 -1
Multiplied by two: -18 6 196 20 -2
Press any key to continue . . .
*/