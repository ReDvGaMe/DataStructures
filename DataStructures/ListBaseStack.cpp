#include "ListBaseStack.h"



ListBaseStack::ListBaseStack() {
}

ListBaseStack::ListBaseStack(int n, int val) {
	for (int i = 0; i < n; i++)
		SPush(val);
}


ListBaseStack::~ListBaseStack() {
	Node* delNode = head;
	while (delNode != NULL) {
		Node* delNodeNext = delNode->next;
		delete delNode;
		delNode = delNodeNext;
	}
}

bool ListBaseStack::SIsEmpty() {
	if (head == NULL)
		return true;
	else
		return false;
}

void ListBaseStack::SPush(Data data) {
	Node* newNode = new Node;
	newNode->data = data;
	newNode->prev = head;
	head = newNode;
}

Data ListBaseStack::SPop() {
	if (SIsEmpty()) {
		cout << "스택이 비어있습니다." << endl;
		return false;
	}

	Data rtnData = head->data;
	Node* headPrev = head->prev;
	delete head;

	head = headPrev;

	return rtnData;
}

Data ListBaseStack::SPeek() {
	if (SIsEmpty()) {
		cout << "스택이 비어있습니다." << endl;
		return false;
	}

	return head->data;
}
