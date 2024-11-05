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
	cout << "������ " << radius;
	cout << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius;
	cout << "�� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ ";
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ ";
	cout << area << endl;
}