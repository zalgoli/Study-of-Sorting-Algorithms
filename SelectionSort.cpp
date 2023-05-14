#include "SelectionSort.h"

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int* smallest(int* arr, int size) {
	int smallest = arr[0];
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]){
			int smallest = arr[i + 1];
		}
	}
	return &smallest;
}

void selection_sort(int* arr, int size, bool ascending) {
	if (ascending) {
		bool sorted = false;
		while (!sorted) {
			sorted = true;
			for (int i = 0; i < size; i++) {
				int floor = 0;
				int floor = 0;
				swap(&arr[i], &*smallest(arr, size));
			}
		}
	}
}