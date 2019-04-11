#include "LinkedList.h"

LinkedList::LinkedList() {
	head = new Node;
}

LinkedList::LinkedList(int n, int val) {
	head = new Node;
	for (int i = 0; i < n; i++)
		LPushFront(val);
}

LinkedList::~LinkedList() {
	Node* delNode = head;
	while (delNode != NULL) {
		Node* nextDelNode = delNode->next;
		delete delNode;
		delNode = nextDelNode;
	}
}

void LinkedList::ToIdx(int idx) {
	if (LEmpty())
		return;
	cur = head;
	for (int i = 0; i < idx; i++) {
		before = cur;
		cur = cur->next;
	}
}

void LinkedList::LInsert(int data, int idx) {
	Node* newNode = new Node;
	newNode->data = data;

	ToIdx(idx);

	newNode->next = cur;
	cur = newNode;
	before->next = cur;
}

void LinkedList::LPushFront(int data) {
	Node* newNode = new Node;
	newNode->data = data;

	newNode->next = head;
	head = newNode;
}

int LinkedList::LFirst() {
	if (LEmpty())
		return NULL;

	return head->data;
}

Node * LinkedList::LBegin() {
	if (LEmpty())
		return NULL;

	return head;
}

Node * LinkedList::LEnd() {
	Node* endNode = LBegin();
	while (endNode->next != NULL)
		endNode = endNode->next;
	return endNode;
}

bool LinkedList::LEmpty() {
	if (head == NULL)
		return true;
	else if (head != NULL)
		return false;
}

int LinkedList::LRemove(int idx) {
	if (LEmpty())
		return NULL;

	ToIdx(idx);

	Node* delNode = cur;
	int delData = cur->data;

	before->next = delNode->next;

	delete delNode;
	delNode = NULL;

	return delData;
}

int LinkedList::LPopFront() {
	if (LEmpty())
		return NULL;

	Node* delNode = head;
	head = head->next;

	int delData = delNode->data;

	delete delNode;
	delNode = NULL;	

	return delData;
}

int LinkedList::LCount() {
	Node* cntNode = LBegin();
	int numOfData = 0;
	while (cntNode->next != NULL) {
		cntNode = cntNode->next;
		numOfData++;
	}		

	return numOfData;
}

int LinkedList::LPeek(int idx) {
	ToIdx(idx);
	
	return cur->data;
}
