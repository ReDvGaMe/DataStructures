#pragma once
#include "defines.h"

struct _node {
public:
	int data;
	_node* next = NULL;
};
using Node = _node;

class CircularLinkedList {
public:
	CircularLinkedList();
	CircularLinkedList(int n, int val);
	virtual ~CircularLinkedList();
private:	
	Node* tail = NULL;
	Node* cur = NULL;
	Node* before = NULL;
	int numOfData = 0;

	void ToIdx(int idx);
	
public:
	void LInsert(int data, int idx);
	void LPushFront(int data);
	void LPushBack(int data);
	int LFirst();
	int LLast();
	Node* LBegin();
	Node* LEnd();
	bool LEmpty();
	int LRemove(int idx);
	int LPopBack();
	int LPopFront();
	int LCount();
	int LPeek(int idx);
};

