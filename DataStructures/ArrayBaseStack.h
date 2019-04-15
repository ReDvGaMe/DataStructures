#pragma once
#include "defines.h"

class ArrayBaseStack
{
public:
	ArrayBaseStack();
	ArrayBaseStack(int n, int val);
	virtual ~ArrayBaseStack();

private:
	int idx = -1;
	Data stack[ARRAY_SIZE];

public:
	bool SIsEmpty();
	void SPush(Data data);
	Data SPop();
	Data SPeek();
};

