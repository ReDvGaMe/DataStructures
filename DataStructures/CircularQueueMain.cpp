#include "CircularQueue.h"

int main() {
	CircularQueue circularQueue(2, 5);

	cout << circularQueue.QPeek() << endl;

	circularQueue.Enqueue(10);
	circularQueue.Enqueue(15);
	circularQueue.Enqueue(20);
	circularQueue.PrintQueue();

	cout << circularQueue.Dequeue() << endl;
	cout << circularQueue.Dequeue() << endl;
	cout << circularQueue.QPeek() << endl;
	circularQueue.PrintQueue();

	circularQueue.Enqueue(1);
	circularQueue.Enqueue(2);
	circularQueue.Enqueue(3);
	circularQueue.PrintQueue();

	cout << circularQueue.Dequeue() << endl;
	cout << circularQueue.Dequeue() << endl;
	cout << circularQueue.Dequeue() << endl;
	cout << circularQueue.Dequeue() << endl;
	cout << circularQueue.Dequeue() << endl;
	cout << circularQueue.Dequeue() << endl;
	cout << circularQueue.Dequeue() << endl;
	circularQueue.PrintQueue();

	return 0;
}