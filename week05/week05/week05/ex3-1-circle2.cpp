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
	Circle();
	Circle(int r);
};

// class ������
double Circle :: getArea() {
	return 3.14 * radius * radius;
}

void Circle::setR(int r) {
	radius = r;
}

// �⺻ ������
Circle::Circle() : CIrcle(1) {}
//{
//	radius = 1;
//	cout << "������ : " << radius << " �� �� ����" << endl;
//}

// �Ű����� �ִ� ������
Circle::Circle(int r) {
	radius = r;
	cout << "������ : " << radius << " �� �� ����" << "\n"<<endl;
}

// class ���� ��ü ����
int main() {
	Circle donut;
	//donut.setR(10);
	cout << "donut�� ����: " << donut.getArea() << "\n";

	// pizza.setR(20);
	Circle pizza(30);
	cout << "pizza�� ����: " << pizza.getArea() << endl;
}