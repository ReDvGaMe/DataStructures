#pragma once
#include "defines.h"

class ArrayBaseQueue {
public:
	ArrayBaseQueue();
	ArrayBaseQueue(int n, Data val);
	virtual ~ArrayBaseQueue();

private:
	Data queue[ARRAY_SIZE];
	int front = 0;
	int rear = 0;

public:
	bool QIsEmpty();
	void Enqueue(Data data);
	Data Dequeue();
	Data QPeek();
	void PrintQueue();
};

