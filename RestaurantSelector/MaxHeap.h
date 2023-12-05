#pragma once

#include "Restaurant.h"

class MaxHeap
{
public:
	int size;
	Restaurant* arr; 
	MaxHeap();
	//getters
	Restaurant extractMax();
	//modifiers
	void insert(Restaurant rest);
	int parent(int index);
};