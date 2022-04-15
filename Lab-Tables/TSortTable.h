#pragma once
#include "TScanTable.h"

class TSortTable : TScanTable
{
public:

	bool Find(TKey key) override;
	bool Insert(TRecord record) override;
	bool Delete(TKey key) override;

	
};

bool TSortTable::Find(TKey key)
{
	int begin = 0, end = dataCount - 1, middle;
	while (begin <= end)
	{
		efficiency++;
		middle = (begin + end) / 2;
		if (arr[middle].key < key) end = middle - 1;
		else if (arr[middle].key > key) end = middle + 1;
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
	return false;
}

