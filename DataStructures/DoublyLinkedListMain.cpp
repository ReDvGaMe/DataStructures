#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList doublyLinkedList;

	doublyLinkedList.LPushBack(10);
	doublyLinkedList.LPushBack(20);
	doublyLinkedList.LPushBack(30);
	doublyLinkedList.LPushBack(40);
	doublyLinkedList.LPushBack(50);

	cout << "현재 데이터 수 : " << doublyLinkedList.LCount() << endl << "오른쪽으로 출력" << endl;
	for (Node* i = doublyLinkedList.LBegin(); i != doublyLinkedList.LEnd(); i = i->next)
		cout << i->data << endl;

	cout << "현재 데이터 수 : " << doublyLinkedList.LCount() << endl << "왼쪽으로 출력" << endl;
	for (Node* i = doublyLinkedList.LRBegin(); i != doublyLinkedList.LREnd(); i = i->prev)
		cout << i->data << endl;

	return 0;
}