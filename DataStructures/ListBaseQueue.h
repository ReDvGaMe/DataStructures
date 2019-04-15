#pragma once
#include "defines.h"

class ListBaseQueue {
public:
	ListBaseQueue();
	ListBaseQueue(int n, int val);
	virtual ~ListBaseQueue();

private:
	Node* front;
	Node* rear;

public:
	bool QIsEmpty();
	void Enqueue(Data data);
	Data Dequeue();
	Data QPeek();
	void PrintQueue();
};

