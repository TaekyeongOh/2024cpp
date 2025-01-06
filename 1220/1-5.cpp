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
	Circle* pArray = new Circle[3];

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}
	//pArray의 시작 주소를 포인터 p에 저장
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl; // 현재 객체의 면적 출력
		p++; // 포인터를 다음 객체로 이동
	}
	delete[]pArray;
}