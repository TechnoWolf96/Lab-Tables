#pragma once
#include "THashTable.h"

class TArrayHash : public THashTable
{
protected:
	TRecord* arr, free, deleted;
	int size, step;
	int currentPos;

public:
	TArrayHash(int size = 10, int step = 1);
	~TArrayHash() { delete[] arr; }
	int HashFunc(TKey key) override { return key % size; }

	bool IsFull() const override { return dataCount == size; }
	bool GetSize() { return size; }

	bool Find(TKey key) override;
	bool Insert(TRecord rec) override;
	bool Delete(TKey key) override;

	void Reset() override;
	void GoNext() override;
	bool IsEnd() override { currentPos == size; }

	TRecord GetCurrentRecord() override { return arr[currentPos]; }
	void SetCurrentRecord(TRecord record);

};

TArrayHash::TArrayHash(int size, int step)
{
	this->size = size;
	this->step = step;
	arr = new TRecord[size];
	free.key = -1;
	deleted.key = -2;
	for (int i = 0; i < size; i++) arr[i] = free;
}


inline bool TArrayHash::Find(TKey key)
{
	int pos = HashFunc(key);
	bool foundDel = false;
	for (int i = 0; i < size; i++)
	{
		efficiency++;
		if (arr[pos].key == key)
		{
			currentPos = pos;
			return true;
		}
		else if (arr[pos].key == deleted.key && !foundDel)
		{
			currentPos = pos;
			foundDel = true;
		}
		else if (arr[pos].key == free.key)
		{
			if (!foundDel) currentPos = pos;
			break;
		}
		pos = (pos + step) % size;
	}
	return false;
}

inline bool TArrayHash::Insert(TRecord rec)
{
	if (IsFull()) return false;
	if (!Find(rec.key))
	{
		arr[currentPos] = rec;
		dataCount++;
		efficiency++;
		return true;
	}
	return false;
}

inline bool TArrayHash::Delete(TKey key)
{
	if (IsEmpty()) return false;
	if (Find(key))
	{
		arr[currentPos] = deleted;
		dataCount--;
		efficiency++;
		return true;
	}
	return false;
}

inline void TArrayHash::Reset()
{
	for (currentPos = 0; currentPos < size; currentPos++)
		if (arr[currentPos].key != deleted.key && arr[currentPos].key != arr[currentPos].key) return;
}

inline void TArrayHash::GoNext()
{
	for (currentPos++; currentPos < size; currentPos++)
		if (arr[currentPos].key != deleted.key && arr[currentPos].key != arr[currentPos].key) return;
}

inline void TArrayHash::SetCurrentRecord(TRecord record)
{
	Delete(arr[currentPos].key);
	Insert(record);
}
