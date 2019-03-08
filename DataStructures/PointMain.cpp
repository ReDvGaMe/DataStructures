#include "ArrayList.h"
#include "Point.h"

int main() {
	// Point 리스트
	ArrayList<Point*> list;
	// 동적생성용 포인터
	Point* ppos;

	// 4개 의 데이터 저장
	ppos = new Point(2, 1);
	list.LInsert(ppos);

	ppos = new Point(2, 2);
	list.LInsert(ppos);

	ppos = new Point(3, 1);
	list.LInsert(ppos);

	ppos = new Point(3, 2);
	list.LInsert(ppos);

	// 저장된 데이터 출력
	cout << "현재 데이터 수 : " << list.LCount() << endl;

	if (list.LFirst()) {
		list.LGetData()->ShowPos();

		while(list.LNext())
			list.LGetData()->ShowPos();
	}

	// xpos가 2인 모든 데이터 삭제
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

	// 삭제 후 저장된 데이터 출력
	cout << "현재 데이터 수 : " << list.LCount() << endl;

	if (list.LFirst()) {
		list.LGetData()->ShowPos();

		while (list.LNext())
			list.LGetData()->ShowPos();
	}
	
	return 0;
}