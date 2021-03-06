#pragma once
#include "defines.h"

class LinkedList {
public:
	LinkedList();
	LinkedList(int n, int val);
	virtual ~LinkedList();

protected:
	Node* head = NULL;
	Node* cur = NULL;
	Node* before = NULL;

	void ToIdx(int idx);
public:
	void LInsert(int data, int idx);
	void LPushFront(int data);
	int LFirst();
	Node* LBegin();
	Node* LEnd();
	bool LEmpty();
	int LRemove(int idx);
	int LPopFront();
	int LCount();
	int LPeek(int idx);
};

