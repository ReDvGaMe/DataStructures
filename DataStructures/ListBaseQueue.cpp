#include "ListBaseQueue.h"



ListBaseQueue::ListBaseQueue() {
}

ListBaseQueue::ListBaseQueue(int n, int val) {
	for (int i = 0; i < n; i++)
		Enqueue(val);
}


ListBaseQueue::~ListBaseQueue() {
}

bool ListBaseQueue::QIsEmpty() {
	if (front == NULL)
		return true;
	else
		return false;
}

void ListBaseQueue::Enqueue(Data data) {
	Node* newNode = new Node;
	newNode->data = data;
	if (QIsEmpty()) {
		front = newNode;
		rear = newNode;
	}
	else {
		rear->next = newNode;
		rear = newNode;
	}	
}

Data ListBaseQueue::Dequeue() {
	if (QIsEmpty()) {
		cout << "큐가 비어있습니다." << endl;
		return false;
	}
	cout << front->data << " Dequeue" << endl;

	Data rtnData = front->data;
	Node* nextNode = front->next;

	delete front;
	front = nextNode;

	return rtnData;
}

Data ListBaseQueue::QPeek() {
	if (QIsEmpty()) {
		cout << "큐가 비어있습니다." << endl;
		return false;
	}
	cout << front->data << " peek" << endl;
	return front->data;
}

void ListBaseQueue::PrintQueue() {
	Node* tempNode = front;
	while (tempNode != NULL) {
		cout << tempNode->data << ' ';
		tempNode = tempNode->next;
	}
	cout << endl;
}
