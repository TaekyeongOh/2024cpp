#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

// 困烙 积己磊
Point::Point() { x = 0; y = 0; }
// 鸥百 积己磊
Point::Point(int a, int b) { x = a; y = b; }


int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}