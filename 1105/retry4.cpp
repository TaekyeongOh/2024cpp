#include <iostream>
using namespace std;

class Point {
	int x = 0, y = 0;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

Point::Point():x(0), y(0) {}
Point::Point(int a, int b): x(a),y(b) {}

int main() {
	Point origin;
	Point target(20, 30);
	origin.show();
	target.show();
}