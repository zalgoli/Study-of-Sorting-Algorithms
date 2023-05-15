#include <iostream>
#include <random>
#include <algorithm>
#include <chrono>


#include "BubbleSort.h"
#include "SelectionSort.h"

int main()
{
    // Specify the length of the array to sort (it gets slow above 80k elements)
    const int size = 100000;
    int arr[size];

    // Fill the array with numbers
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Shuffle the array using a random generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(arr, arr + size, gen);

    std::cout << "Choose which sorting algorithm to use: \n1. Bubble Sort\n2. Selection Sort\n";
    int algorithm;
    std::cin >> algorithm;
    switch (algorithm) {
    case 1: {
        bubble_sort(arr, size, false);
        break;
    }
    case 2: {
        selection_sort(arr, size, true);
        break;
    }
    }

    return 0;
}