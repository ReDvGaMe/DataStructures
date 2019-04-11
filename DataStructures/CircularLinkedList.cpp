#include "CircularLinkedList.h"



CircularLinkedList::CircularLinkedList() {
}

CircularLinkedList::CircularLinkedList(int n, int val) {
	for (int i = 0; i < n; i++)
		LPushBack(val);
}


CircularLinkedList::~CircularLinkedList() {
	Node* delNode = tail;
	for(int i = 0; i < numOfData; i++) {
		Node* nextDelNode = delNode->next;
		delete delNode;
		delNode = nextDelNode;
	}
}

void CircularLinkedList::ToIdx(int idx) {
	if (LEmpty())
		return;
	cur = tail->next;
	for (int i = 0; i < idx; i++) {
		before = cur;
		cur = cur->next;
	}
}

void CircularLinkedList::LInsert(int data, int idx) {
	Node* newNode = new Node;
	newNode->data = data;

	ToIdx(idx);

	newNode->next = cur;
	cur = newNode;
	before->next = cur;

	if (idx == 0)
		tail->next = newNode;

	numOfData++;
}

void CircularLinkedList::LPushFront(int data) {
	Node* newNode = new Node;
	newNode->data = data;

	if (LEmpty()) {
		tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = tail->next;
		tail->next = newNode;
	}

	numOfData++;
}

void CircularLinkedList::LPushBack(int data) {
	Node* newNode = new Node;
	newNode->data = data;
	
	if (LEmpty()) {
		tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = tail->next;
		tail->next = newNode;
		tail = newNode;
	}

	numOfData++;
}

int CircularLinkedList::LFirst() {
	if (LEmpty())
		return NULL;

	return tail->next->data;
}

int CircularLinkedList::LLast() {
	if (LEmpty())
		return NULL;

	return tail->data;
}

Node * CircularLinkedList::LBegin() {
	if (LEmpty())
		return NULL;

	return tail->next;
}

Node * CircularLinkedList::LEnd() {
	if (LEmpty())
		return NULL;

	return tail;
}

bool CircularLinkedList::LEmpty() {
	if (tail == NULL)
		return true;
	else if (tail != NULL)
		return false;
}

int CircularLinkedList::LRemove(int idx) {
	if (LEmpty())
		return NULL;

	ToIdx(idx);

	Node* delNode = cur;
	int delData = cur->data;

	before->next = delNode->next;
	if (delNode == tail)
		tail = before;

	delete delNode;
	delNode = NULL;

	numOfData--;

	return delData;
}

int CircularLinkedList::LPopBack() {
	if (LEmpty())
		return NULL;

	Node* delNode = tail;

	ToIdx(numOfData-1);
	before->next = tail->next;
	tail = before;

	int delData = delNode->data;

	delete delNode;
	delNode = NULL;

	numOfData--;

	return delData;
}

int CircularLinkedList::LPopFront() {
	if (LEmpty())
		return NULL;

	Node* delNode = tail->next;
	tail->next = tail->next->next;
	tail->next = tail->next;

	int delData = delNode->data;

	delete delNode;
	delNode = NULL;

	numOfData--;

	return delData;
}

int CircularLinkedList::LCount() {
	return numOfData;
}

int CircularLinkedList::LPeek(int idx) {
	ToIdx(idx);

	return cur->data;
}
