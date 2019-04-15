#include "ListBaseStack.h"

int main() {
	ListBaseStack listBaseStack(2, 5);

	cout << listBaseStack.SPeek() << endl;

	listBaseStack.SPush(10);
	listBaseStack.SPush(15);
	listBaseStack.SPush(20);

	cout << listBaseStack.SPop() << endl;
	cout << listBaseStack.SPop() << endl;
	cout << listBaseStack.SPeek() << endl;

	listBaseStack.SPush(1);
	listBaseStack.SPush(2);
	listBaseStack.SPush(3);

	cout << listBaseStack.SPop() << endl;
	cout << listBaseStack.SPop() << endl;
	cout << listBaseStack.SPop() << endl;
	cout << listBaseStack.SPop() << endl;
	cout << listBaseStack.SPop() << endl;
	cout << listBaseStack.SPop() << endl;
	cout << listBaseStack.SPop() << endl;

	return 0;
}
