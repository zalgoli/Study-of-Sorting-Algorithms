#include "BubbleSort.h"
#include <chrono>
#include <iostream>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int* arr, int size, bool ascending) {
    auto start_time = std::chrono::high_resolution_clock::now();
    bool sorted = false;
    if (ascending) {
        while (!sorted) {
            sorted = true;
            for (int i = 0; i < size - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    sorted = false;
                    swap(&arr[i], &arr[i + 1]);
                }
            }
        }
    }
    else if (!ascending) {
        while (!sorted) {
            sorted = true;
            for (int i = 0; i < size - 1; i++) {
                if (arr[i] < arr[i + 1]) {
                    sorted = false;
                    swap(&arr[i], &arr[i + 1]);
                }
            }
        }
    }
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    std::cout << "Sorting " << size << " elements took " << duration_ms << " milliseconds." << std::endl;
}
