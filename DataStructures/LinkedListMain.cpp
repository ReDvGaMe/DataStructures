#include "LinkedList.h"

int main() {
	LinkedList linkedList;
	int data;
	
	linkedList.LInsert(10);
	linkedList.LInsert(20);
	linkedList.LInsert(30);
	linkedList.LInsert(20);
	linkedList.LInsert(50);

	cout << "현재 데이터 수 : " << linkedList.LCount() << endl;
	if (linkedList.LFirst(data)) {
		cout << data << endl;

		while (linkedList.LNext(data))
			cout << data << endl;
	}

	cout << "데이터 20 삭제" << endl;
	if (linkedList.LFirst(data)) {
		if (data == 20)
			linkedList.LRemove();

		while (linkedList.LNext(data)) {
			if (data == 20)
				linkedList.LRemove();
		}
	}

	cout << "현재 데이터 수 : " << linkedList.LCount() << endl;
	if (linkedList.LFirst(data)) {
		cout << data << endl;

		while (linkedList.LNext(data))
			cout << data << endl;
	}

	return 0;
}