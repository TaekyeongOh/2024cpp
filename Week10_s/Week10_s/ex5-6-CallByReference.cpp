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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

//waffle��ü�� ���� �����Ű����� C�� ���� increase()�Լ��ۼ�
void increase(  ) {



}

int main() {
	Circle waffle(30);
	increase(waffle); //������ ���� ȣ��, waffle��ü ����
	cout << waffle.getRadius() << endl;
}