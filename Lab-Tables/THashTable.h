#pragma once
#include "TTable.h"

class THashTable
{
protected:
	virtual int HashFunc(TKey key) = 0;

};
