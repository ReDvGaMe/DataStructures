#pragma once
#include "defines.h"

#define LIST_LEN 100

template <typename T>
class ArrayList {
public:
	ArrayList() {
		// 초기화
		dataCount = 0;
		curPos = -1;
	};
	~ArrayList() {}

private:
	// 리스트 저장용 배열
	T arr[LIST_LEN];

	// 저장된 데이터의 수
	int dataCount;

	// 데이터 참조위치
	int curPos;

public:
	// 리스트에 데이터 저장
	void LInsert(T data) {
		// 저장할 공간이 있다면
		if (dataCount < LIST_LEN) {
			arr[dataCount] = data;	// 리스트의 끝 부분에 데이터 삽입
			dataCount++;	// 개수 증가
		}
		// 저장할 공간이 없다면
		else {

		}
	}

	// 리스트의 첫번째 원소 참조
	bool LFirst() {
		// 데이터가 없다면 false 반환
		if (dataCount == 0)
			return false;

		// 참조위치를 0으로 초기화
		curPos = 0;

		return true;
	}

	// 다음 원소 참조
	bool LNext() {	
		// 더 이상 참조할 데이터가 없다면
		if (curPos + 1 >= dataCount)
			return false;

		// 참조위치를 다음 위치로 변경
		curPos++;
		return true;
	}

	// 제거
	T LRemove() {
		// 삭제할 데이터 저장
		T remove_data = arr[curPos];

		// 삭제한 데이터 뒤에 있는 데이터들을 앞으로 이동
		for (int i = curPos; i < dataCount - 1; i++)
			arr[i] = arr[i + 1];

		arr[dataCount - 1] = NULL;
		
		// 데이터 개수 감소
		dataCount--;

		// 참조위치를 이전 위치로 변경
		curPos--;

		return remove_data;
	}

	// 데이터 수 반환
	int LCount() {
		return dataCount;
	}

	// 데이터 반환
	T LGetData() {
		return arr[curPos];
	}
}; 