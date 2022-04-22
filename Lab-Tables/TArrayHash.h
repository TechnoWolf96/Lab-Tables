#pragma once
#include "THashTable.h"

class TArrayHash : public THashTable
{
protected:
	TRecord* arr, free;
	int size, step;
	int currentPos;

	TArrayHash(int size = 10, int step = 1)
	{
		this->size = size;
		this->step = step;
		arr = new TRecord[size];
		free.key = -1;
		for (int i = 0; i < size; i++) arr[i] = free;

	}

};


