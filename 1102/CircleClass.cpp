#include <iostream>
using namespace std;

class Circle {
public:
	int r;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * r * r;
}

int main() {
	Circle donut;
	donut.r = 2;
	double area = donut.getArea();
	cout << "������ ������ " << area << endl;

	Circle pizza;
	pizza.r = 10;
	area = pizza.getArea();
	cout << "������ ������ " << area << endl;

}