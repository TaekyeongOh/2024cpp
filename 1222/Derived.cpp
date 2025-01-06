#include <iostream>
using namespace std;

class Point {
	int x, y;  // 한 점 (x,y) 좌표 값
public:
	void set(int x, int y);
	void showPoint();
};
class ColorPoint : public Point {  // Point를 상속받음
	string color;  // 점의 색 표현
public:
	void setColor(string color);
	void showColorPoint();
};

int main() {
	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer;

	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
}