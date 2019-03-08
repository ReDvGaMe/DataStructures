#include "ArrayList.h"
#include "Point.h"

int main() {
	// Point ����Ʈ
	ArrayList<Point*> list;
	// ���������� ������
	Point* ppos;

	// 4�� �� ������ ����
	ppos = new Point(2, 1);
	list.LInsert(ppos);

	ppos = new Point(2, 2);
	list.LInsert(ppos);

	ppos = new Point(3, 1);
	list.LInsert(ppos);

	ppos = new Point(3, 2);
	list.LInsert(ppos);

	// ����� ������ ���
	cout << "���� ������ �� : " << list.LCount() << endl;

	if (list.LFirst()) {
		list.LGetData()->ShowPos();

		while(list.LNext())
			list.LGetData()->ShowPos();
	}

	// xpos�� 2�� ��� ������ ����
	Point compPos(2, 0);

	if (list.LFirst()) {
		if ((*(list.LGetData()) == compPos) == 1) {
			ppos = list.LRemove();
			delete ppos;
		}
		while (list.LNext()) {
			if ((*(list.LGetData()) == compPos) == 1) {
				ppos = list.LRemove();
				delete ppos;
			}
		}
	}

	// ���� �� ����� ������ ���
	cout << "���� ������ �� : " << list.LCount() << endl;

	if (list.LFirst()) {
		list.LGetData()->ShowPos();

		while (list.LNext())
			list.LGetData()->ShowPos();
	}
	
	return 0;
}