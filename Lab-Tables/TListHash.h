#pragma once
#include "THashTable.h"
#include "TList.h"

class TListHash : public THashTable
{
protected:
	TList<TRecord> *arr;
	int size, currentListNumber;
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

	TRecord GetCurrentRecord() override { return arr[currentListNumber].GetCurrentItem(); }
	void SetCurrentRecord(TRecord record) override;
};

TListHash::TListHash(int size)
{
	this->size = size;
	arr = new TList<TRecord>[size];
	currentListNumber = 0;
}

inline void TListHash::GoNext()
{
	arr[currentListNumber].GoNext();
	if (arr[currentListNumber].IsEnd())
	{
		for (currentListNumber++; currentListNumber < size; currentListNumber++)
		{
			if (!arr[currentListNumber].IsEmpty())
			{
				arr[currentListNumber].Reset();
				return;
			}
		}
	}

	
}

inline void TListHash::Reset()
{
	if (IsEmpty()) { currentListNumber = 0; return;}
	
	for (currentListNumber = 0; currentListNumber < size; currentListNumber++)
	{
		if (!arr[currentListNumber].IsEmpty())
		{
			arr[currentListNumber].Reset();
			return;
		}
	}
	
}

inline bool TListHash::IsEnd()
{
	return currentListNumber == size;
}

inline bool TListHash::Find(TKey key)
{
	currentListNumber = HashFunc(key);
	for (arr[currentListNumber].Reset(); !arr[currentListNumber].IsEnd(); arr[currentListNumber].GoNext())
	{
		efficiency++;
		TRecord rec = arr[currentListNumber].GetCurrentItem();
		if (key == rec.key) return true;
	}
	return false;

}

inline bool TListHash::Insert(TRecord rec)
{
	if (Find(rec.key)) return false;
	arr[currentListNumber].InsertCurrent(rec);
	dataCount++;
	return true;
}

inline bool TListHash::Delete(TKey key)
{
	if (!Find(key)) return false;
	arr[currentListNumber].DeleteCurrent();
	dataCount--;
	return true;
}

inline void TListHash::SetCurrentRecord(TRecord record)
{
	arr[currentListNumber].SetCurrentItem(record);
}
