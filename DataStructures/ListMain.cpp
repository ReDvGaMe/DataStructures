#include "ArrayList.h"

int main() {
	// ArrayList ���� �� �ʱ�ȭ
	ArrayList<int> list;

	// ������ ����
	list.LInsert(11);	list.LInsert(11);
	list.LInsert(22);	list.LInsert(22);
	list.LInsert(33);

	// ����� ������ ��ü ���
	cout << "���� ������ �� : " << list.LCount() << endl;
	if (list.LFirst()) {
		cout << list.LGetData() << " ";

		while (list.LNext())
			cout << list.LGetData() << " ";

		cout << endl;
	}

	// ���� 22�� Ž���Ͽ� ��� ����
	if (list.LFirst()) {
		if (list.LGetData() == 22)
			list.LRemove();

		while (list.LNext()) {
			if (list.LGetData() == 22)
				list.LRemove();
		}
	}

	// ���� �� ���� ������ ��ü ���
	cout << "���� ������ �� : " << list.LCount() << endl;
	if (list.LFirst()) {
		cout << list.LGetData() << " ";

		while (list.LNext())
			cout << list.LGetData() << " ";

		cout << endl;
	}

	return 0;
}