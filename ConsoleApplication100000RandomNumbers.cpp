// ConsoleApplicationRandomNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>   // For rand and srand
#include <ctime>     // For the time function

int *getRandomNumbers(int num);

using namespace std;

int main()
{
	const int N = 1000;
	int *intArray = getRandomNumbers(N);
	for (int i = 0; i < N; i++)
		cout << intArray[i] << endl;
	return 0;
}

int *getRandomNumbers(int num)
{
	int *arr = nullptr;	// Array to hold the numbers

						// Return null if num is zero or negative.
	if (num <= 0)
		return NULL;

	// Dynamically allocate the array.
	arr = new int[num];

	// Seed the random number generator by passing
	// the return value of time(0) to srand.
	srand(time(0));

	// Populate the array with random numbers.
	for (int count = 0; count < num; count++)
		arr[count] = rand() % num;

	// Return a pointer to the array.
	return arr;
}
