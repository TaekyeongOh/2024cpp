#include <iostream>
using namespace std;

class Point {
	int x, y;  // �� �� (x,y) ��ǥ ��
public:
	void set(int x, int y);
	void showPoint();
};
class ColorPoint : public Point {  // Point�� ��ӹ���
	string color;  // ���� �� ǥ��
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