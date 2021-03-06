// Ch13_QuickSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <algorithm>   // Provides swap
#include <cstdlib>     // Provides EXIT_SUCCESS, size_t
#include <iostream>
#include "quick1.h"
using namespace std;


int main()
{
	const char BLANK = ' ';
	const size_t ARRAY_SIZE = 10;  // Number of elements in the array to be sorted
	int data[ARRAY_SIZE];          // Array of integers to be sorted
	int user_input;                // Number typed by the user
	size_t number_of_elements;     // How much of the array is used
	size_t i;                      // Array index

								   // Provide some instructions.
	cout << "Please type up to " << ARRAY_SIZE << " positive integers. ";
	cout << "Indicate the list's end with a zero." << endl;

	// Read the input numbers.
	number_of_elements = 0;
	cin >> user_input;
	while ((user_input != 0) && (number_of_elements < ARRAY_SIZE))
	{
		data[number_of_elements] = user_input;
		number_of_elements++;
		cin >> user_input;
	}

	// Sort the numbers, and print the result with two blanks after each number.
	quicksort(data, number_of_elements);
	cout << "In sorted order, your numbers are: " << endl;
	for (i = 0; i < number_of_elements; i++)
		cout << data[i] << BLANK << BLANK;
	cout << endl;

	return EXIT_SUCCESS;
}


