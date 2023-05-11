#include <iostream>
#include <random>
#include <algorithm>
#include <chrono>

#include "BubbleSort.h"


int main()
{
    const int size = 10000;
    int arr[size];

    // Fill the array with numbers
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Shuffle the array using a random generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(arr, arr + size, gen);

    std::cout << "Choose which sorting algorithm to use: \n1. Bubble Sort\n";
    int algorithm;
    std::cin >> algorithm;
    switch (algorithm) {
    case 1: {
        bubble_sort(arr, size, false);
        break;
    }
    }
    

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] <<",";
    }

    std::cout << "\n\n";

    

    std::cout << "\n\n";
    
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ",";
    }

    return 0;
}