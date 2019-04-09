#pragma once
#include "defines.h"

struct _node {
public:
	int data;
	_node* next = NULL;
};
using Node = _node;

class LinkedList {
public:
	LinkedList();
	~LinkedList();

private:
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;
	Node* before = NULL;
	int numOfData = 0;

public:
	void LInsert(int data);
	bool LFirst(int& data);
	bool LNext(int& data);
	int LRemove();
	int LCount();
};

