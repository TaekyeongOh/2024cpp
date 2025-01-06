#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "생성자실행radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자실행radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자실행radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 : ";
		cin >> radius;
		if (radius < 0) break;
		
		//동적 객체 생성
		Circle* p = new Circle(radius);
		cout << p->getArea() << endl;
		delete p;
		cout << endl;
	}
}