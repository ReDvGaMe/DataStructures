#include "CircularQueue.h"



CircularQueue::CircularQueue() {
}

CircularQueue::CircularQueue(int n, Data val) {
	for (int i = 0; i < n; i++)
		Enqueue(val);
}

CircularQueue::~CircularQueue() {
}

bool CircularQueue::QIsEmpty() {
	if (front == rear)
		return true;
	else
		return false;
}

bool CircularQueue::QIsFull() {
	int tempIdx = rear;
	NextIdx(tempIdx);
	if (tempIdx == front)
		return true;
	else
		return false;
}

void CircularQueue::Enqueue(Data data) {
	if (QIsFull()) {
		cout << "큐가 가득 찼습니다." << endl;
		return;
	}
	queue[rear] = data;
	NextIdx(rear);
}

Data CircularQueue::Dequeue() {
	if (QIsEmpty()) {
		cout << "큐가 비어있습니다." << endl;
		return false;
	}
	cout << queue[front] << " Dequeue" << endl;
	int rtnIdx = front;
	NextIdx(front);
	return queue[rtnIdx];
}

Data CircularQueue::QPeek() {
	if (QIsEmpty()) {
		cout << "큐가 비어있습니다." << endl;
		return false;
	}
	cout << queue[front] << " peek" << endl;
	return queue[front];
}

void CircularQueue::NextIdx(int& idx) {
	if (idx == CIRCULAR_ARRAY_SIZE - 1)
		idx = 0;
	else
		idx += 1;
}

void CircularQueue::PrintQueue() {
	for (int i = front; i < rear; i++) {
		cout << queue[i] << ' ';
	}
	cout << endl;
}
