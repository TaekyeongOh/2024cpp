#include <iostream>
using namespace std;

// class ����
class Circle
{
private:
	int radius;
public:
	void setR(int r);
	double getArea();
};

// class ������
double Circle :: getArea() {
	return 3.14 * radius * radius;
}

void Circle::setR(int r) {
	radius = r;
}

// class ���� ��ü ����
int main() {
	Circle donut, pizza;
	donut.setR(10);
	cout << "donut�� ����: " << donut.getArea() << "\n";

	pizza.setR(20);
	cout << "pizza�� ����: " << pizza.getArea() << endl;
}