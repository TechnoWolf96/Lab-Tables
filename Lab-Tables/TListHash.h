#pragma once
#include "THashTable.h"
#include <list>

class TListHash : public THashTable
{
protected:
	std::list<TRecord> *arr;
	int size, currentPos;
	std::list<TRecord>::iterator currentIter;
public:
	TListHash(int size = 10);
	~TListHash() { delete[] arr; }
	int HashFunc(TKey key) override { return key % size; }

	int GetSize() const { return size; }
	bool IsFull() const override { return false; }

	void GoNext() override;
	void Reset() override;
	bool IsEnd() override;

	bool Find(TKey key) override;
	bool Insert(TRecord rec) override;
	bool Delete(TKey key) override;

	TRecord GetCurrentRecord() override { return *currentIter; }
	void SetCurrentRecord(TRecord record) override;
};

TListHash::TListHash(int size)
{
	this->size = size;
	arr = new std::list<TRecord>[size];
	currentPos = 0;
}

inline void TListHash::GoNext()
{
	currentIter++;
	if (currentIter == arr[currentPos].end())
	{
		for (currentPos++; currentPos < size; currentPos++)
		{
			if (arr[currentPos].size() != 0)
				currentIter = arr[currentPos].begin();
		}
	}

	
}

inline void TListHash::Reset()
{
	if (IsEmpty()) {currentPos = 0; return;}
	
	for (currentPos = 0; currentPos < size; currentPos++)
	{
		if (arr[currentPos].size() != 0)
			currentIter = arr[currentPos].begin();
	}
	
}

inline bool TListHash::IsEnd()
{
	return currentPos == size;
}

inline bool TListHash::Find(TKey key)
{
	currentPos = HashFunc(key);
	for (currentIter = arr[currentPos].begin(); currentIter != arr[currentPos].end(); currentIter++, currentPos++)
	{
		efficiency++;
		TRecord rec = *currentIter;
		if (key == rec.key) return true;
	}
	return false;

}

inline bool TListHash::Insert(TRecord rec)
{
	if (Find(rec.key)) return false;
	arr[currentPos].push_back(rec);
	return true;
}

inline bool TListHash::Delete(TKey key)
{
	if (!Find(key)) return false;
	arr[currentPos].erase(currentIter);
	return true;
}

inline void TListHash::SetCurrentRecord(TRecord record)
{
	*currentIter = record;
}
