#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle(const Circle& c); // ��������ڼ���
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle(const Circle& c) { // ��������ڱ���
	this->radius = c.radius;
	cout << "��������ڽ���radius = " << radius << endl;
}
int main() {
	Circle src(30);     // src��ü�Ǻ��������ȣ��
	Circle dest(src); // dest��ü�Ǻ��������ȣ��
	cout << "�����Ǹ���= " << src.getArea() << endl;
	cout << "�纻�Ǹ���= " << dest.getArea() << endl;
}