#include <iostream>
using namespace std;

// class 선언
class Circle
{
private:
	int radius;
public:
	void setR(int r);
	double getArea();
};

// class 구현부
double Circle :: getArea() {
	return 3.14 * radius * radius;
}

void Circle::setR(int r) {
	radius = r;
}

// class 통한 객체 생성
int main() {
	Circle donut, pizza;
	donut.setR(10);
	cout << "donut의 넓이: " << donut.getArea() << "\n";

	pizza.setR(20);
	cout << "pizza의 넓이: " << pizza.getArea() << endl;
}