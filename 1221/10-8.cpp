#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "积己磊角青radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "积己磊角青radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "家戈磊角青radius = " << radius << endl;
}
//increase窃荐 积己
void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}
//main
int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}