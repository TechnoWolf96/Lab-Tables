#pragma once
#include "TScanTable.h"

enum SortType { Selection, Quick };

class TSortTable : public TArrayTable
{
private:
	

	void SelectionSort();
	void QuickSort(int first, int last);



public:

	TSortTable(TArrayTable& table, SortType sortType);

	bool Find(TKey key) override;
	bool Insert(TRecord record) override;
	bool Delete(TKey key) override;
	

};

inline void TSortTable::SelectionSort()
{
	if (IsEmpty()) return;

	TRecord min = arr[0];
	for (int i = 0; i < dataCount; i++)
	{
		for (int j = i; j < dataCount; j++)
		{
			if (min.key > arr[j].key) min = arr[j];
			efficiency++;
		}
		arr[i] = min;
		efficiency++;
	}
}

inline void TSortTable::QuickSort(int first, int last)
{
	TKey mid = arr[(first + last) / 2].key;
	int leftPos = first, rightPos = last;
	while (leftPos < rightPos)
	{
		while (arr[leftPos].key < mid) leftPos++, efficiency++;
		while (arr[rightPos].key > mid) rightPos++, efficiency++;
		if (leftPos <= rightPos)
		{
			TRecord temp = arr[leftPos];
			arr[leftPos] = arr[rightPos];
			arr[rightPos] = temp;
			leftPos++, rightPos++, efficiency++;
		}
	}
}

inline TSortTable::TSortTable(TArrayTable& table, SortType sortType) : TArrayTable(table.GetSize())
{
	for (Reset(), table.Reset(); !table.IsEnd(); table.GoNext(), GoNext())
		SetCurrentRecord(table.GetCurrentRecord());
	if (sortType == SortType::Quick) QuickSort(0, GetDataCount()-1);
	if (sortType == SortType::Selection) SelectionSort();

}

bool TSortTable::Find(TKey key)
{
	int begin = 0, end = dataCount - 1, middle;
	while (begin <= end)
	{
		efficiency++;
		middle = (begin + end) / 2;
		if (arr[middle].key < key) begin = middle + 1;
		else if (arr[middle].key > key) end = middle - 1;
		else { currentPos = middle; return true; }
	}
	currentPos = begin;
	return false;

}

inline bool TSortTable::Insert(TRecord record)
{
	if (IsFull() || Find(record.key)) return false;
	for (int i = dataCount - 1; i >= currentPos; i--)
	{
		arr[i + 1] = arr[i];
		efficiency++;
	}
	arr[currentPos] = record;
	efficiency++;
	dataCount++;
	return true;
}

inline bool TSortTable::Delete(TKey key)
{
	if (!Find(key)) return false;
	for (int i = currentPos; i < dataCount - 1; i++)
	{
		arr[i] = arr[i + 1];
		efficiency++;
	}
	dataCount--;
	return true;
}

