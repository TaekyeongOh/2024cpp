#include <iostream>
#include <string>
using namespace std;

class Point { 
	int x, y;
public:
	Point(int x, int y) {
		this->x = x; this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

//------- ��ӹ��� ColorPoint Ŭ���� �ۼ��ϱ�-> Ŭ���� ���� �����ڵ� �ۼ�(inline �Լ�)



int main() {
	ColorPoint cp(5, 5, "RED");
	cp.show(); // ����Լ�
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}