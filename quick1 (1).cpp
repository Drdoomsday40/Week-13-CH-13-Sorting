// written by Takyiu Liu, West Valley, 4/27/2018

#include "stdafx.h"
#include "quick1.h"
#include <algorithm>   // Provides swap
#include <cstdlib>     // Provides EXIT_SUCCESS, size_t
#include <iostream>
using namespace std;


static void partition(int data[], size_t n, size_t& pivot_index)
// Library facilities used: itemtool.h, stdlib.h
//
// NOTES FROM THE IMPLEMENTOR:
// How the partition works on small arrays:
//
// Notice that n=0 is not permitted by the precondition.
//
// If n=1, then too_big_index is initialized as 1, and too_small_index is
// initialized as 0. Therefore, the body of the loop is never executed,
// and after the loop pivot_index is set to zero.
//
// If n=2, then both too_big_index and too_small_index are initialized as 1.
// The loop is entered, and there are two cases to consider:
// -- if data[1] <= pivot, then too_big_index increases to 2, and
//    too_small_index stays at 1. The if-statement at the bottom of the loop
//    is then skipped, and after the loop we copy data[1] down to data[0],
//    and copy the pivot into data[0]. Thus, the smaller element is in
//    data[0], and the larger element (the pivot) is in data[1].
// -- if data[1] > pivot, then too_big_index stays at 1, and too_small_index
//    decreases to 0. The if-statement at the bottom of the loop is then
//    skipped, and after the loop we end up copying the pivot onto data[0]
//    (leaving data[1] alone). Thus, the smaller element (the pivot) remains
//    at data[0], leaving the larger element at data[1].
{
	int pivot = data[0];
	size_t too_big_index = 1;     // Index of first item after pivot
	size_t too_small_index = n - 1; // Index of last item
	// to be finished by student
}

void quicksort(int data[], size_t n)
// Library facilities used: stdlib.h
{
	size_t pivot_index; // Array index for the pivot element
	size_t n1;          // Number of elements before the pivot element
	size_t n2;          // Number of elements after the pivot element
	// to be finished by student
}
