#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	Circle();
	Circle(int r);
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle() {
	radius = 1;
	cout << "반지름 : " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 : " << radius << endl;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut area : " << area<<endl;

	Circle pizza(10);
	area = pizza.getArea();
	cout << "pizza area : " << area;
}