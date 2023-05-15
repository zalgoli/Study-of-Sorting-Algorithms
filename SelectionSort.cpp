#include "SelectionSort.h"
#include "BubbleSort.h"
#include <chrono>
#include <iostream>

int smallest_largest(int* arr, int size, bool smallest) {
	int index = 0;
	if (smallest) {
		for (int i = 1; i < size; i++) {
			if (arr[i] < arr[index]) {
				index = i;
			}
		}
	}
	else {
		for (int i = 1; i < size; i++) {
			if (arr[i] > arr[index]) {
				index = i;
			}
		}
	}
	return index;
}

void selection_sort(int* arr, int size, bool ascending) {
	auto start_time = std::chrono::high_resolution_clock::now();
	if (ascending) {
		for (int i = 0; i < size - 1; i++) {
			int index = i + smallest_largest(arr + i, size - i, true);
			swap(&arr[i], &arr[index]);
		}
	}
	else {
		for (int i = 0; i < size - 1; i++) {
			int index = i + smallest_largest(arr + i, size - i, false);
			swap(&arr[i], &arr[index]);
		}
	}
	auto end_time = std::chrono::high_resolution_clock::now();
	auto duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
	std::cout << "Sorting "<< size << " elements took " << duration_ms << " milliseconds." << std::endl;
}
