#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}
Circle::~Circle() {
	cout << "반지름 " << radius << "인 원 소멸" << endl;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle maindonut;
	Circle mainpizza(10);
	f();

	return 0;
}