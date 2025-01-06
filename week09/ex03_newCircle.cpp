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
	cout<< "������ ���� radius = " << radius << endl;
}
	
Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {// ��ü�� ���� ���� �� ��ȯ�ڵ� �ۼ�
	Circle* p, * q;
	p = new Circle();
	q = new Circle(30);
	//unique_ptr<Circle> p(new Circle);
	//auto p = make_unique<Circle>();
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;
	

	//����Ʈ ������ ��� : �⺻ ������ Ÿ�� ��� ��
	//unique_ptr<int> pint(new int);
	//*pint = 4;
	//cout << *pint << endl;
}