#include "ArrayBaseQueue.h"

int main() {
	ArrayBaseQueue arrayBaseQueue(2, 5);

	cout << arrayBaseQueue.QPeek() << endl;

	arrayBaseQueue.Enqueue(10);
	arrayBaseQueue.Enqueue(15);
	arrayBaseQueue.Enqueue(20);
	arrayBaseQueue.PrintQueue();

	cout << arrayBaseQueue.Dequeue() << endl;
	cout << arrayBaseQueue.Dequeue() << endl;
	cout << arrayBaseQueue.QPeek() << endl;
	arrayBaseQueue.PrintQueue();

	arrayBaseQueue.Enqueue(1);
	arrayBaseQueue.Enqueue(2);
	arrayBaseQueue.Enqueue(3);
	arrayBaseQueue.PrintQueue();

	cout << arrayBaseQueue.Dequeue() << endl;
	cout << arrayBaseQueue.Dequeue() << endl;
	cout << arrayBaseQueue.Dequeue() << endl;
	cout << arrayBaseQueue.Dequeue() << endl;
	cout << arrayBaseQueue.Dequeue() << endl;
	cout << arrayBaseQueue.Dequeue() << endl;
	cout << arrayBaseQueue.Dequeue() << endl;
	arrayBaseQueue.PrintQueue();

	return 0;
}