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
	// pos값 설정
	void SetPos(int x, int y);

	// pos값 출력
	void ShowPos();

	// 두 Point 값 비교
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

