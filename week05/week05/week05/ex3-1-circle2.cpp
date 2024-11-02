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
	Circle();
	Circle(int r);
};

// class 구현부
double Circle :: getArea() {
	return 3.14 * radius * radius;
}

void Circle::setR(int r) {
	radius = r;
}

// 기본 생성자
Circle::Circle() : CIrcle(1) {}
//{
//	radius = 1;
//	cout << "반지름 : " << radius << " 인 원 생성" << endl;
//}

// 매개값이 있는 생성자
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 : " << radius << " 인 원 생성" << "\n"<<endl;
}

// class 통한 객체 생성
int main() {
	Circle donut;
	//donut.setR(10);
	cout << "donut의 넓이: " << donut.getArea() << "\n";

	// pizza.setR(20);
	Circle pizza(30);
	cout << "pizza의 넓이: " << pizza.getArea() << endl;
}