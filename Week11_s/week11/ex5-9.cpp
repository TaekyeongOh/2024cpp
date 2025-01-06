#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle(const Circle& c); // 복사생성자선언
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle(const Circle& c) { // 복사생성자구현
	this->radius = c.radius;
	cout << "복사생성자실행radius = " << radius << endl;
}
int main() {
	Circle src(30);     // src객체의보통생성자호출
	Circle dest(src); // dest객체의복사생성자호출
	cout << "원본의면적= " << src.getArea() << endl;
	cout << "사본의면적= " << dest.getArea() << endl;
}