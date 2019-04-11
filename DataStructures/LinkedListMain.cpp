#include "LinkedList.h"

int main() {
	LinkedList linkedList(2, 10);
	
	linkedList.LPushFront(20);
	linkedList.LPushFront(20);
	linkedList.LPushFront(30);
	linkedList.LPushFront(40);
	linkedList.LPushFront(50);
	cout << "현재 데이터 수 : " << linkedList.LCount() << endl;
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next)
		cout << i->data << endl;

	linkedList.LInsert(25, 4);
	linkedList.LInsert(25, 6);
	cout << "현재 데이터 수 : " << linkedList.LCount() << endl;
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next)
		cout << i->data << endl;

	cout << "데이터 20 삭제" << endl;
	int idx = 0;
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next, idx++) {
		if (i->data == 20) {
			i = i->next;
			linkedList.LRemove(idx);
		}			
	}

	cout << "현재 데이터 수 : " << linkedList.LCount() << endl;
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next)
		cout << i->data << endl;
	
	cout << "PopFront수행 전 : " << linkedList.LCount() << endl;
	linkedList.LPopFront();
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next)
		cout << i->data << endl;
	cout << "PopFront수행 후 : " << linkedList.LCount() << endl;

	return 0;
}