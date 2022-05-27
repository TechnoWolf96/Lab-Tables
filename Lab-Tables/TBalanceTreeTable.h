#pragma once
#include "TTreeTable.h"





class TBalanceTreeTable : public TTreeTable
{
private:
	enum Height { OK, INC, DEC };

	Height LeftInsertBalance(TTreeNode*& p);
	Height InsertBalance(TTreeNode*& p, TRecord rec);
	
	
};


inline TBalanceTreeTable::Height TBalanceTreeTable::LeftInsertBalance(TTreeNode*& p)
{
	Height res = Height::OK;
	if (p->balance == 1) p->balance = 0;
	else if (p->balance == 0) { p->balance = -1; res = Height::DEC; }
	// ” вершины нарушено условие равновеси€ - запуск балансировочной перестановки
	else
	{
		TTreeNode* pl = p->pLeft;

		// ѕервый типовой случай
		if (pl->balance == -1)
		{
			p->pLeft = pl->pRight;
			pl->pRight = p;
			pl->balance = 0;
			p->balance = 0;
			res = Height::OK;
			p = pl;
		}
		
		// ¬торой типовой случай

		// TODO

	}
	return res;
}

inline TBalanceTreeTable::Height TBalanceTreeTable::InsertBalance(TTreeNode*& p, TRecord rec)
{
	Height res = Height::OK;
	efficiency++;
	//if (p == nullptr)

}
