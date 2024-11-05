#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
};

// (1) ������ �ڵ忡�� ��� ���� �ʱ�ȭ
Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b; }

// (2) ������ ���ο� �ʱ갪���� �ʱ�ȭ
Point::Point() :x(0), y(0) {
}
Point::Point(int a, int b)
	: x(a), y(b) {
}

// (3) Ŭ���� ����ο��� ���� �ʱ�ȭ
class Point {
	int x = 0, y = 0;
public:
	Point();
	Point(int a, int b);
};