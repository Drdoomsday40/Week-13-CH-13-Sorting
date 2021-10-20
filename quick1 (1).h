#pragma once

// written by Takyiu Liu, West Valley, 4/27/2018

#include <algorithm>   // Provides swap
#include <cstdlib>     // Provides EXIT_SUCCESS, size_t
#include <iostream>
using namespace std;


static void partition(int data[], size_t n, size_t& pivot_index);
void quicksort(int data[], size_t n);
