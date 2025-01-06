#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14*radius*radius; }
}; 

Circle::Circle(): Circle(1) { }

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	int radius;
	while(true) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		
		//음수가 입력되면 종료: if-break문
		if (radius < 0) break;
		//동적 객체 생성
		Circle* p = new Circle(radius);
		//원의 면적 출력
		cout << "원의 면적 = " << p->getArea() << endl;
		//객체 반환
		delete p;
		cout << endl;
	}
}