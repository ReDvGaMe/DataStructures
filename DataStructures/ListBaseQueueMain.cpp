#include "ListBaseQueue.h"

int main() {
	ListBaseQueue listBaseQueue(2, 5);

	cout << listBaseQueue.QPeek() << endl;

	listBaseQueue.Enqueue(10);
	listBaseQueue.Enqueue(15);
	listBaseQueue.Enqueue(20);
	listBaseQueue.PrintQueue();

	cout << listBaseQueue.Dequeue() << endl;
	cout << listBaseQueue.Dequeue() << endl;
	cout << listBaseQueue.QPeek() << endl;
	listBaseQueue.PrintQueue();

	listBaseQueue.Enqueue(1);
	listBaseQueue.Enqueue(2);
	listBaseQueue.Enqueue(3);
	listBaseQueue.PrintQueue();

	cout << listBaseQueue.Dequeue() << endl;
	cout << listBaseQueue.Dequeue() << endl;
	cout << listBaseQueue.Dequeue() << endl;
	cout << listBaseQueue.Dequeue() << endl;
	cout << listBaseQueue.Dequeue() << endl;
	cout << listBaseQueue.Dequeue() << endl;
	cout << listBaseQueue.Dequeue() << endl;
	listBaseQueue.PrintQueue();

	return 0;
}