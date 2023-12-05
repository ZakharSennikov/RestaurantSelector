#include "MaxHeap.h"


MaxHeap::MaxHeap() {
	arr = new Restaurant[200000];
	size = 0;
}

//getters
Restaurant MaxHeap::extractMax() {
	Restaurant fin = arr[0];
	arr[0] = arr[size - 1];
	size--;
	int num = 0;
	int bigger;
	// takes out the first value replacing it with the last one and heapifying 
	while (true) {
		int left = num * 2 + 1;
		int right = num * 2 + 2;
		bigger = num;

		if (left < size && arr[left].getRating() > arr[bigger].getRating()) {
			bigger = left;
		}
		if (right < size && arr[right].getRating() > arr[bigger].getRating()) {
			bigger = right;
		}
		if (num != bigger) {
			Restaurant temp = arr[num];
			arr[num] = arr[bigger];
			arr[bigger] = temp;
			num = bigger;
		}
		else {
			break;
		}
	}
	return fin;
}


//modifiers
void MaxHeap::insert(Restaurant rest) {
	arr[size] = rest;
	int index = size;
	size++;
	// uses the parent function to find the right place to put the restaurant
	while (index != 0 && arr[parent(index)].getRating() < arr[index].getRating()) {
		Restaurant temp = arr[parent(index)];
		arr[parent(index)] = arr[index];
		arr[index] = temp;
		index = parent(index);
	}
}

int MaxHeap::parent(int index) {
	return (index - 1) / 2;
}