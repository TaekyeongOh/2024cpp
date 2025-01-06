#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle getCircle() {
	Circle tmp(30); // radius기 30인 Circle 객체 tmp 생성
	return tmp;
}

int main() {
	Circle c;
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;
}