#include "LinkedList.h"

LinkedList::LinkedList() {
	head = new Node;
}

LinkedList::~LinkedList() {
	Node* delNode = head;
	while (delNode == NULL) {
		Node* nextDelNode = delNode->next;
		delete delNode;
		delNode = nextDelNode;
	}
}

void LinkedList::LInsert(int data) {
	Node* newNode = new Node;
	newNode->data = data;
	if (head->next == NULL) {
		newNode->next = NULL;
		before = head;
	}
	else
		newNode->next = cur;

	cur = newNode;
	before->next = cur;

	numOfData++;
}

bool LinkedList::LFirst(int& data) {
	if (head->next == NULL)
		return false;
	
	before = head;
	cur = head->next;

	data = cur->data;
	return true;
}

bool LinkedList::LNext(int& data) {
	if (cur->next == NULL)
		return false;

	before = cur;
	cur = cur->next;

	data = cur->data;
	return true;
}

int LinkedList::LRemove() {
	if (head->next == NULL)
		return NULL;
	
	Node* delNode = cur;
	int delData = cur->data;

	before->next = cur->next;
	cur = before;

	delete delNode;
	delNode = NULL;

	numOfData--;

	return delData;
}

int LinkedList::LCount() {
	return numOfData;
}