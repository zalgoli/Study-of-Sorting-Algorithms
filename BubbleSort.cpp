#include "BubbleSort.h"
#include <chrono>
#include <iostream>

void bubble_sort(int* arr, int size, bool ascending) {
	auto start_time = std::chrono::high_resolution_clock::now();
	bool sorted = false;
	if (ascending) {
		while (!sorted) {
			sorted = true;
			for (int i = 0; i < size; i++) {
				if (arr[i] > arr[i + 1]) {
					sorted = false;
					int* temp = &arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = *temp;
				}
			}
		}
	}
	else {
		while (!sorted) {
			sorted = true;
			for (int i = 0; i < size; i++) {
				if (arr[i] < arr[i + 1]) {
					sorted = false;
					int* temp = &arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = *temp;
				}
			}
		}
	}
	auto end_time = std::chrono::high_resolution_clock::now();
	auto duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
	std::cout << "Sorting took " << duration_ms << " milliseconds." << std::endl;
}