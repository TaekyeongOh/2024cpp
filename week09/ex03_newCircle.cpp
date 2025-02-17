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

Circle::Circle() {
	radius = 1; 
	cout<< "생성자 실행 radius = " << radius << endl;
}
	
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {// 객체의 동적 생성 및 반환코드 작성
	Circle* p, * q;
	p = new Circle();
	q = new Circle(30);
	//unique_ptr<Circle> p(new Circle);
	//auto p = make_unique<Circle>();
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;
	

	//스마트 포인터 사용 : 기본 데이터 타입 사용 예
	//unique_ptr<int> pint(new int);
	//*pint = 4;
	//cout << *pint << endl;
}