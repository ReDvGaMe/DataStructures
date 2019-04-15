#include "ArrayBaseQueue.h"



ArrayBaseQueue::ArrayBaseQueue() {
}

ArrayBaseQueue::ArrayBaseQueue(int n, Data val) {
	for (int i = 0; i < n; i++)
		Enqueue(val);
}


ArrayBaseQueue::~ArrayBaseQueue() {
}

bool ArrayBaseQueue::QIsEmpty() {
	if (front == rear)
		return true;
	else
		return false;
}

void ArrayBaseQueue::Enqueue(Data data) {
	queue[rear++] = data;
}

Data ArrayBaseQueue::Dequeue() {
	if (QIsEmpty()) {
		cout << "큐가 비어있습니다." << endl;
		return false;
	}
	cout << queue[front] << " Dequeue" << endl;
	return queue[front++];
}

Data ArrayBaseQueue::QPeek() {
	if (QIsEmpty()) {
		cout << "큐가 비어있습니다." << endl;
		return false;
	}
	cout << queue[front] << " peek" << endl;
	return queue[front];
}

void ArrayBaseQueue::PrintQueue() {
	for (int i = front; i < rear; i++) {
		cout << queue[i] << ' ';
	}
	cout << endl;
}
