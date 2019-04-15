#pragma once
#include "defines.h"

class ListBaseStack {
public:
	ListBaseStack();
	ListBaseStack(int n, int val);
	virtual ~ListBaseStack();

private:
	Node* head;

public:
	bool SIsEmpty();
	void SPush(Data data);
	Data SPop();
	Data SPeek();
};

