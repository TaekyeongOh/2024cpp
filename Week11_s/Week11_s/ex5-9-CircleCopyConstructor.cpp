#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	// 복사 생성자 선언

	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
}; 

// 복사 생성자 구현






int main() {
	Circle src(30); // src 객체의  보통 생성자 호출
	Circle dest(src); // dest 객체의 복사 생성자 호출

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}
