#include "ArrayBaseStack.h"



ArrayBaseStack::ArrayBaseStack() {
}

ArrayBaseStack::ArrayBaseStack(int n, int val) {
	for (int i = 0; i < n; i++)
		SPush(val);
}


ArrayBaseStack::~ArrayBaseStack() {
}

bool ArrayBaseStack::SIsEmpty() {
	if (idx == -1)		return true;
	else					return false;
}

void ArrayBaseStack::SPush(Data data) {
	if (idx >= ARRAY_SIZE - 1) {
		cout << "스택 사이즈 초과" << endl;
		return;
	}

	stack[++idx] = data;
}

Data ArrayBaseStack::SPop() {
	if (SIsEmpty()) {
		cout << "스택이 비어있습니다." << endl;
		return false;
	}
	return stack[idx--];
}

Data ArrayBaseStack::SPeek() {
	if (SIsEmpty()) {
		cout << "스택이 비어있습니다." << endl;
		return false;
	}
	return  stack[idx];
}
