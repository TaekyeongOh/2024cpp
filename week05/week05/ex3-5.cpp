#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

// 위임 생성자
Point::Point() : Point(0, 0) {
	cout << "위임생성자임" << endl;
}


Point::Point(int a, int b) { x = a; y = b; }
// Point::Point(int a, int b) : x{a}, y{b} { } 가능

// 타겟 생성자

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}