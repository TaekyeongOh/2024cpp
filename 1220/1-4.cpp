#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void  setRadius(int r) { radius = r; }
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
		cout << "정수 반지름 입력(음수이면 종료) >> ";
		cin >> radius;

		//음수가 입력되면 종료 : if-break문
		if (radius < 0) break;
		//동적 객체 생성
		Circle* p = new Circle(radius); // 입력받은 반지름 값 이용해 Cirlce 객체를 동적으로 생성
		//동적 생성은 실행 중 필요한 메모리를 요청하고 사용이 끝나면 반환
		//원의 면적 출력
		cout << "원의 면적 = " << p->getArea() << endl;
		//객체 반환
		delete p; // 객체가 사용한 동적 메모리를 해제하고 소멸자 호출함
		cout << endl;
	}
}