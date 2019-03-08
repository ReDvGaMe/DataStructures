#pragma once
#include "defines.h"
class Point {
public:
	Point(int x, int y);
	~Point();
private:
	int xpos;
	int ypos;
public:
	// pos�� ����
	void SetPos(int x, int y);

	// pos�� ���
	void ShowPos();

	// �� Point �� ��
	int operator ==(const Point &rhs) const {
		if (xpos == rhs.xpos && ypos == rhs.ypos)
			return 0;
		else if (xpos == rhs.xpos)
			return 1;
		else if (ypos == rhs.ypos)
			return 2;
		else
			return -1;
	}
};

