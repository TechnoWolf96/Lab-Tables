#include "TSortTable.h"
#include "TTreeTable.h"
#include "TListHash.h"
#include "TArrayHash.h"
#include <iostream>
using namespace std;


int main()
{
	TListHash* table = new TListHash(2);


	for (int i = 0; i < 199; i++)
	{
		TKey key = rand() % (100 + 1);
		TValue value = "Record";
		TRecord newRecord(key, value);
		table->Insert(newRecord);

	}

	for (table->Reset(); !table->IsEnd(); table->GoNext())
	{
		cout << table->GetCurrentRecord().key << ' ';
	}


	return 0;
}


