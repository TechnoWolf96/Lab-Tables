#pragma once
#include "TTable.h"
#include <stack>

struct TTreeNode
{
	TRecord rec;
	TTreeNode *pLeft, *pRight;

	TTreeNode(TRecord rec)
	{
		this->rec = rec;
		pLeft = nullptr;
		pRight = nullptr;
	}
	TTreeNode()
	{
		pLeft = nullptr;
		pRight = nullptr;
	}
};


class TTreeTable : public TTable
{
protected:
	TTreeNode* pRoot, * pCurrent, * pPrev;
	std::stack<TTreeNode*> st;
public:

	TTreeTable();
	
	bool IsFull() const override;

	bool Find(TKey key) override;
	bool Insert(TRecord rec) override;
	bool Delete(TKey key) override;


};

TTreeTable::TTreeTable() : TTable()
{
	pRoot = nullptr;
	pCurrent = nullptr;
	pPrev = nullptr;
}


inline bool TTreeTable::IsFull() const
{
	try { new TTreeNode(); }
	catch (...) { return true; }
	return false;
}

inline bool TTreeTable::Find(TKey key)
{
	pCurrent = pRoot;
	pPrev = nullptr;
	while (pCurrent != nullptr)
	{
		efficiency++;
		if (pCurrent->rec.key == key) return true;
		else if (pCurrent->rec.key < key)
		{
			pPrev = pCurrent;
			pCurrent = pCurrent->pRight;
		}
		else
		{
			pPrev = pCurrent;
			pCurrent = pCurrent->pLeft;
		}
	}
	pCurrent = pPrev;
	return false;
}

inline bool TTreeTable::Insert(TRecord rec)
{
	if (IsFull() || Find(rec.key)) return false;
	TTreeNode* newNode = new TTreeNode(rec);
	if (rec.key > pCurrent->rec.key) pCurrent->pRight = newNode;
	else pCurrent->pLeft = newNode;
	return true;
}

inline bool TTreeTable::Delete(TKey key)
{
	if (!Find(key)) return false;
	TTreeNode* pDel = pCurrent;


	if (pCurrent->pRight == nullptr)
	{
		if (pPrev == nullptr) pRoot = pRoot->pLeft; // Удаление root
		else
		{
			if (pCurrent->rec.key > pPrev->rec.key) pPrev->pRight = pCurrent->pLeft;
			else pPrev->pLeft = pCurrent->pLeft;
		}
	}
	else if (pCurrent->pLeft == nullptr)
	{
		if (pPrev == nullptr) pRoot = pRoot->pRight; // Удаление root
		else
		{
			if (pCurrent->rec.key > pPrev->rec.key) pPrev->pRight = pCurrent->pRight;
			else pPrev->pLeft = pCurrent->pRight;
		}
	}
	else
	{
		TTreeNode* temp = pCurrent->pLeft;
		pPrev = pCurrent;
		while (temp->pRight != nullptr)
		{
			efficiency++;
			pPrev = temp;
			temp = temp->pRight;
		}
		pCurrent->rec = temp->rec;
		if (pPrev != pCurrent) pPrev->pRight = temp->pLeft;
		else pPrev->pLeft = temp->pLeft;
		pDel = temp;
	}
	efficiency++;
	delete pDel;
	dataCount--;
	return true;
}
