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
	// 새 객체 동적 생성
	Circle *pArray = new Circle[3];

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	//넓이 구하기
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}
	//포인터 p에 배열의 주소값으로 설정
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++;
	}

	//객체 삭제
	delete[] pArray;
}