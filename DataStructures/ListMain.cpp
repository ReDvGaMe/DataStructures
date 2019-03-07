#include "ArrayList.h"

int main() {
	// ArrayList 생성 및 초기화
	ArrayList<int> list;

	// 데이터 저장
	list.LInsert(11);	list.LInsert(11);
	list.LInsert(22);	list.LInsert(22);
	list.LInsert(33);

	// 저장된 데이터 전체 출력
	cout << "현재 데이터 수 : " << list.LCount() << endl;
	if (list.LFirst()) {
		cout << list.LGetData() << " ";

		while (list.LNext())
			cout << list.LGetData() << " ";

		cout << endl;
	}

	// 숫자 22를 탐색하여 모두 삭제
	if (list.LFirst()) {
		if (list.LGetData() == 22)
			list.LRemove();

		while (list.LNext()) {
			if (list.LGetData() == 22)
				list.LRemove();
		}
	}

	// 삭제 후 남은 데이터 전체 출력
	cout << "현재 데이터 수 : " << list.LCount() << endl;
	if (list.LFirst()) {
		cout << list.LGetData() << " ";

		while (list.LNext())
			cout << list.LGetData() << " ";

		cout << endl;
	}

	return 0;
}