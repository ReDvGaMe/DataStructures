#pragma once
#include "defines.h"

#define LIST_LEN 100

template <typename T>
class ArrayList {
public:
	ArrayList() {
		// �ʱ�ȭ
		dataCount = 0;
		curPos = -1;
	};
	~ArrayList() {}

private:
	// ����Ʈ ����� �迭
	T arr[LIST_LEN];

	// ����� �������� ��
	int dataCount;

	// ������ ������ġ
	int curPos;

public:
	// ����Ʈ�� ������ ����
	void LInsert(T data) {
		// ������ ������ �ִٸ�
		if (dataCount < LIST_LEN) {
			arr[dataCount] = data;	// ����Ʈ�� �� �κп� ������ ����
			dataCount++;	// ���� ����
		}
		// ������ ������ ���ٸ�
		else {

		}
	}

	// ����Ʈ�� ù��° ���� ����
	bool LFirst() {
		// �����Ͱ� ���ٸ� false ��ȯ
		if (dataCount == 0)
			return false;

		// ������ġ�� 0���� �ʱ�ȭ
		curPos = 0;

		return true;
	}

	// ���� ���� ����
	bool LNext() {	
		// �� �̻� ������ �����Ͱ� ���ٸ�
		if (curPos + 1 >= dataCount)
			return false;

		// ������ġ�� ���� ��ġ�� ����
		curPos++;
		return true;
	}

	// ����
	T LRemove() {
		// ������ ������ ����
		T remove_data = arr[curPos];

		// ������ ������ �ڿ� �ִ� �����͵��� ������ �̵�
		for (int i = curPos; i < dataCount - 1; i++)
			arr[i] = arr[i + 1];

		arr[dataCount - 1] = NULL;
		
		// ������ ���� ����
		dataCount--;

		// ������ġ�� ���� ��ġ�� ����
		curPos--;

		return remove_data;
	}

	// ������ �� ��ȯ
	int LCount() {
		return dataCount;
	}

	// ������ ��ȯ
	T LGetData() {
		return arr[curPos];
	}
}; 