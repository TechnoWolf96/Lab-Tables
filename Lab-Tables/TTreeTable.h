#pragma once
#include "TTable.h"
#include <stack>
#include <iostream>

struct TTreeNode
{
	TRecord rec;
	TTreeNode *pLeft, *pRight;
	int balance;

	TTreeNode(TRecord rec)
	{
		this->rec = rec;
		pLeft = nullptr;
		pRight = nullptr;
		balance = 0;
	}
	TTreeNode()
	{
		pLeft = nullptr;
		pRight = nullptr;
		balance = 0;
	}
};


class TTreeTable : public TTable
{
protected:
	TTreeNode* pRoot, * pCurrent, * pPrev;
	std::stack<TTreeNode*> st;
	int countPos;

	void DeleteRec(TTreeNode* node)
	{
		if (node->pLeft != nullptr) DeleteRec(node->pLeft);
		if (node->pRight != nullptr) DeleteRec(node->pRight);
		delete node;
	}
	
	void PrintRec(TTreeNode* node, std::ostream& os, int level)
	{
		if (node == nullptr) return;
		for (int i = 0; i < level; i++) os << " ";
		os << node->rec.key << '\n';
		level++;
		PrintRec(node->pRight, os, level);
		PrintRec(node->pLeft, os, level);
		level--;
	}


public:
	TTreeTable();
	~TTreeTable() { Clear(); }
	
	bool IsFull() const override;

	bool Find(TKey key) override;
	bool Insert(TRecord rec) override;
	bool Delete(TKey key) override;

	void Reset() override;
	void GoNext() override;
	bool IsEnd() override;

	TRecord GetCurrentRecord() override { return pCurrent->rec; }
	void SetCurrentRecord(TRecord record) override { Delete(pCurrent->rec.key); Insert(record); }

	void Clear() { DeleteRec(pRoot); }
	void Print(std::ostream& stream) { PrintRec(pRoot, stream, 0); }

};

TTreeTable::TTreeTable() : TTable()
{
	pRoot = nullptr;
	pCurrent = nullptr;
	pPrev = nullptr;
	countPos = 0;
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
	if (IsEmpty()) 
	{
		pRoot = newNode; 
		dataCount++;
		return true;
	}
	if (rec.key > pCurrent->rec.key) pCurrent->pRight = newNode;
	else pCurrent->pLeft = newNode;
	dataCount++;
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

inline void TTreeTable::Reset()
{
	while (!st.empty()) st.pop();
	pCurrent = pRoot;
	while (pCurrent != nullptr)
	{
		st.push(pCurrent);
		pCurrent = pCurrent->pLeft;
	}
	pCurrent = st.top();
	countPos = 0;
}

inline void TTreeTable::GoNext()
{
	st.pop();
	if (pCurrent->pRight != nullptr)
	{
		pCurrent = pCurrent->pRight;
		while (pCurrent != nullptr)
		{
			st.push(pCurrent);
			pCurrent = pCurrent->pLeft;
		}
		pCurrent = st.top();
	}
	else if (!st.empty()) pCurrent = st.top();
	countPos++;

}

inline bool TTreeTable::IsEnd()
{
	return countPos == dataCount;
}
