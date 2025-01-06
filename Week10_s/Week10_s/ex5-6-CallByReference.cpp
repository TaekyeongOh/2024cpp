#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	double getArea()  { return 3.14*radius*radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
}; 

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

//waffle객체에 대한 참조매개변수 C를 가진 increase()함수작성
void increase(  ) {



}

int main() {
	Circle waffle(30);
	increase(waffle); //참조에 의한 호출, waffle객체 전달
	cout << waffle.getRadius() << endl;
}