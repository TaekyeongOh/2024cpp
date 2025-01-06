#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "�����ڽ���radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "�����ڽ���radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��ڽ���radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "���� ������ �Է�(�����̸� ����) : ";
		cin >> radius;
		if (radius < 0) break;

		Circle *circle;
		circle = new Circle(radius);
		cout << "���� ���� : " << circle->getArea() << endl;
		delete circle;
	}
}