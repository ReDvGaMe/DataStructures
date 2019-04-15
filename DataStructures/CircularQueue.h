#pragma once
#include "defines.h"

#define CIRCULAR_ARRAY_SIZE 4

class CircularQueue{
public:
	CircularQueue();
	CircularQueue(int n, Data val);
	virtual ~CircularQueue();

private:
	Data queue[CIRCULAR_ARRAY_SIZE];
	int front = 0;
	int rear = 0;

public:
	bool QIsEmpty();
	bool QIsFull();
	void Enqueue(Data data);
	Data Dequeue();
	Data QPeek();
	void NextIdx(int& idx);
	void PrintQueue();
};