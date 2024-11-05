#include <iostream>
using namespace std;

struct Circle {
	Circle();
	Circle(int r);
	double getArea();
private:
	int radius;
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius;
	cout << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius;
	cout << "원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 ";
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 ";
	cout << area << endl;
}