#pragma once
#include "TTable.h"

class TArrayTable : TTable
{
protected:
	TRecord* arr;
	int size, currentPos;
public:
	TArrayTable(int size = 10);
	~TArrayTable() { delete arr; }
	void GoNext() override { currentPos++; }
	void Reset() override { currentPos = 0; }
	bool IsEnd() override {size == dataCount;}


};

TArrayTable::TArrayTable(int size = 10)
{
	this->size = size;
	arr = new TRecord[size];
	currentPos = 0;
}