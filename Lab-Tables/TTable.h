#pragma once
#include <string>


typedef int TKey;
typedef std::string TValue;

struct TRecord
{
	TKey key;
	TValue value;
	TRecord()
	{
		key = 0;
		value = "";
	}
	TRecord(TKey key, TValue value)
	{
		this->key = key;
		this->value = value;
	}

	TRecord& operator=(const TRecord& other)
	{
		key = other.key;
		value = other.value;
		return *this;
	}
};



class TTable
{
protected:
	int dataCount;
	int efficiency;
public:
	TTable();
	int GetDataCount() const {return dataCount;}
	int GetEfficiency() const { return efficiency; }
	void ClearEfficiency() { efficiency = 0; }
	bool IsEmpty() { return dataCount == 0; }


	virtual bool IsFull() const = 0;

	virtual bool Find(TKey) = 0;
	virtual bool Insert(TRecord record) = 0;
	virtual bool Delete(TKey key) = 0;

	virtual void GoNext() = 0;
	virtual void Reset() = 0;
	virtual bool IsEnd() = 0;

	virtual TRecord GetCurrentRecord() = 0;
	virtual void SetCurrentRecord(TRecord record) = 0;

};

TTable::TTable()
{
	dataCount = 0;
	efficiency = 0;
}

