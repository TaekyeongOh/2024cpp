#include <iostream>
using namespace std;

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << "�� ����" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}
Circle::~Circle() {
	cout << "������ " << radius << "�� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(10);

	return 0;
}