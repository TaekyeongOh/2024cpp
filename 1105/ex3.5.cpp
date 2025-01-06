#include <iostream>
using namespace std;

// Ŭ���� ����ο��� ���� �ʱ�ȭ
class Point {
	int x = 0, y = 0;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

// ������ �ڵ忡�� ��� ���� �ʱ�ȭ

Point::Point(){x = 0; y = 0;}
Point::Point(int a, int b) { x = a; y = b; }


// ������ ���ο� �ʱ갪���� �ʱ�ȭ
Point::Point() : x(0), y(0) {}
Point::Point(int a, int b) : x(a),y(b) {}


int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}