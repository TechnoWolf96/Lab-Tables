#pragma once
#include "TTable.h"

class TArrayTable : public TTable
{
protected:
	TRecord* arr;
	int size, currentPos;
public:
	TArrayTable(int size = 10);
	~TArrayTable() { delete[] arr; }

	int GetSize() const { return size; }
	bool IsFull() const override { return dataCount == size; }

	void GoNext() override { currentPos++; }
	void Reset() override { currentPos = 0; }
	bool IsEnd() override { currentPos == dataCount;}

	TRecord GetCurrentRecord() override { return arr[currentPos]; }
	void SetCurrentRecord(TValue value) override { arr[currentPos].value = value; }

	


};

TArrayTable::TArrayTable(int size = 10)
{
	this->size = size;
	arr = new TRecord[size];
	currentPos = 0;
}