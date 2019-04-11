#include "LinkedList.h"

int main() {
	LinkedList linkedList(2, 10);
	
	linkedList.LPushFront(20);
	linkedList.LPushFront(20);
	linkedList.LPushFront(30);
	linkedList.LPushFront(40);
	linkedList.LPushFront(50);
	cout << "���� ������ �� : " << linkedList.LCount() << endl;
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next)
		cout << i->data << endl;

	linkedList.LInsert(25, 4);
	linkedList.LInsert(25, 6);
	cout << "���� ������ �� : " << linkedList.LCount() << endl;
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next)
		cout << i->data << endl;

	cout << "������ 20 ����" << endl;
	int idx = 0;
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next, idx++) {
		if (i->data == 20) {
			i = i->next;
			linkedList.LRemove(idx);
		}			
	}

	cout << "���� ������ �� : " << linkedList.LCount() << endl;
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next)
		cout << i->data << endl;
	
	cout << "PopFront���� �� : " << linkedList.LCount() << endl;
	linkedList.LPopFront();
	for (Node* i = linkedList.LBegin(); i != linkedList.LEnd(); i = i->next)
		cout << i->data << endl;
	cout << "PopFront���� �� : " << linkedList.LCount() << endl;

	return 0;
}