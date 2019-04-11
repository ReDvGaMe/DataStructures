#include "CircularLinkedList.h"

int main() {
	CircularLinkedList circularLinkedList(2, 10);

	circularLinkedList.LPushFront(20);
	circularLinkedList.LPushFront(20);
	circularLinkedList.LPushBack(30);
	circularLinkedList.LPushBack(40);
	circularLinkedList.LPushFront(50);
	cout << "현재 데이터 수 : " << circularLinkedList.LCount() << endl;
	for (int i = 0; i < circularLinkedList.LCount(); i++)
		cout << circularLinkedList.LPeek(i) << endl;

	circularLinkedList.LInsert(25, 4);
	circularLinkedList.LInsert(25, 6);
	cout << "현재 데이터 수 : " << circularLinkedList.LCount() << endl;
	for (int i = 0; i < circularLinkedList.LCount(); i++)
		cout << circularLinkedList.LPeek(i) << endl;

	cout << "데이터 20 삭제" << endl;
	for (int i = 0; i < circularLinkedList.LCount(); i++) {
		if (circularLinkedList.LPeek(i) == 20) {
			circularLinkedList.LRemove(i);
			i--;
		}
	}

	cout << "현재 데이터 수 : " << circularLinkedList.LCount() << endl;
	for (int i = 0; i < circularLinkedList.LCount(); i++)
		cout << circularLinkedList.LPeek(i) << endl;

	cout << "PopFront수행 전 : " << circularLinkedList.LCount() << endl;
	circularLinkedList.LPopFront();
	for (int i = 0; i < circularLinkedList.LCount(); i++)
		cout << circularLinkedList.LPeek(i) << endl;
	cout << "PopFront수행 후 : " << circularLinkedList.LCount() << endl;

	cout << "PopBack수행 전 : " << circularLinkedList.LCount() << endl;
	circularLinkedList.LPopBack();
	circularLinkedList.LPopBack();
	for (int i = 0; i < circularLinkedList.LCount(); i++)
		cout << circularLinkedList.LPeek(i) << endl;
	cout << "PopBack수행 후 : " << circularLinkedList.LCount() << endl;

	cout << "현재 데이터 수 : " << circularLinkedList.LCount() << endl;
	for (int i = 0; i < circularLinkedList.LCount(); i++)
		cout << circularLinkedList.LPeek(i) << endl;

	return 0;
}