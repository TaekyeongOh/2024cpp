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

Circle::Circle() : Circle(1) {} 

Circle::Circle(int r) {
	radius = r; 
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	// 객체 배열 생성
	Circle* pArray = new Circle[3];
	
	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
		
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}
	Circle* p = pArray; // 포인터 p에 배열의 주소값으로 설정
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++; // 다음 원소의 주소로 증가
	}
	// 객체 배열 소멸
	delete[] pArray;
}