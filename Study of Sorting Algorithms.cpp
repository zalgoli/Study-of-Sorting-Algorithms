#include <iostream>
#include <random>
#include <algorithm>
#include <chrono>

#include "BubbleSort.h"


int main()
{
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

    auto start_time = std::chrono::high_resolution_clock::now();

    bubble_sort(arr, size, true);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();

    std::cout << "Time spent on the operation: " << duration_ms << " milliseconds.\n";

    return 0;
}