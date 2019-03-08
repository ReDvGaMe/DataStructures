#include "Point.h"


Point::Point(int x, int y) : xpos(x), ypos(y) {
}

Point::~Point() {
}

void Point::SetPos(int x, int y) {
	xpos = x; ypos = y;
}

void Point::ShowPos() {
	cout << "[" << xpos << ", " << ypos << "]" << endl;
}
