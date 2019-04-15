#include "DoublyLinkedList.h"



DoublyLinkedList::DoublyLinkedList() {
}

DoublyLinkedList::~DoublyLinkedList() {
	Node* delNode = head;
	while (delNode != NULL) {
		Node* nextDelNode = delNode->next;
		delete delNode;
		delNode = nextDelNode;
	}
}

void DoublyLinkedList::LPushFront(int data) {
	Node* newNode = new Node;
	newNode->data = data;

	if (LEmpty()) {
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}

	numOfData++;
}

void DoublyLinkedList::LPushBack(int data) {
	Node* newNode = new Node;
	newNode->data = data;

	if (LEmpty()) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}

	numOfData++;
}

Node * DoublyLinkedList::LBegin() {
	if (head == NULL)
		return NULL;
	return head;
}

Node * DoublyLinkedList::LEnd() {
	if (tail == NULL)
		return NULL;
	return tail->next;
}

Node * DoublyLinkedList::LRBegin() {
	if (tail == NULL)
		return NULL;
	return tail;
}

Node * DoublyLinkedList::LREnd() {
	if (head == NULL)
		return NULL;
	return head->prev;
}

bool DoublyLinkedList::LEmpty() {
	if (head == NULL)
		return true;
	else if (head != NULL)
		return false;
}

int DoublyLinkedList::LPopBack() {
	if (LEmpty())
		return NULL;

	Node* delNode = tail;
	tail = tail->prev;

	int delData = delNode->data;

	delete delNode;
	delNode = NULL;

	numOfData--;

	return delData;
}

int DoublyLinkedList::LPopFront() {
	if (LEmpty())
		return NULL;

	Node* delNode = head;
	head = head->next;

	int delData = delNode->data;

	delete delNode;
	delNode = NULL;

	numOfData--;

	return delData;
}

int DoublyLinkedList::LCount() {
	return numOfData;
}
