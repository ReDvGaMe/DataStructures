#include "ArrayBaseStack.h"

int main() {
	ArrayBaseStack arrayBaseStack(2, 5);

	cout << arrayBaseStack.SPeek() << endl;
	
	arrayBaseStack.SPush(10);
	arrayBaseStack.SPush(15);
	arrayBaseStack.SPush(20);

	cout << arrayBaseStack.SPop() << endl;
	cout << arrayBaseStack.SPop() << endl;
	cout << arrayBaseStack.SPeek() << endl;

	arrayBaseStack.SPush(1);
	arrayBaseStack.SPush(2);
	arrayBaseStack.SPush(3);

	cout << arrayBaseStack.SPop() << endl;
	cout << arrayBaseStack.SPop() << endl;
	cout << arrayBaseStack.SPop() << endl;
	cout << arrayBaseStack.SPop() << endl;
	cout << arrayBaseStack.SPop() << endl;
	cout << arrayBaseStack.SPop() << endl;
	cout << arrayBaseStack.SPop() << endl;

	return 0;
}
