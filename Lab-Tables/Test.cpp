#include "TSortTable.h"
#include "TTreeTable.h"
#include <iostream>
using namespace std;


int main()
{
	TTreeTable* table = new TTreeTable();


	for (int i = 0; i < 100; i++)
	{
		TKey key = rand() % (100 + 1);
		TValue value = "Record";
		TRecord newRecord(key, value);
		table->Insert(newRecord);

	}

	table->Print(cout);

	for (table->Reset(); !table->IsEnd(); table->GoNext())
	{
		cout << table->GetCurrentRecord().key << ' ';
	}


	return 0;
}


