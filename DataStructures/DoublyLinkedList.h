#pragma once
#include "defines.h"

class DoublyLinkedList {
public:
	DoublyLinkedList();
	~DoublyLinkedList();

private:
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;
	Node* before = NULL;
	int numOfData = 0;

public:
	void LPushFront(int data);
	void LPushBack(int data);
	Node* LBegin();
	Node* LEnd();
	Node * LRBegin();
	Node * LREnd();
	bool LEmpty();
	int LPopBack();
	int LPopFront();
	int LCount();
};

