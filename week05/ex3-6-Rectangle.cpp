#include <iostream> 
using namespace std; 

class Rectangle { 
private:
	int width, height;
public:
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

//�⺻ ������: width�� height 1�� �ʱ�ȭ
Rectangle::Rectangle() {
	width = 1;
	height = 1;
	// width=height=1;
}
//Rectangle::Rectangle():Rectangle(1) {}

Rectangle::Rectangle(int length) {
	width = length;
	height = length;
	// width=height=length;
}
//Rectangle::Rectangle(int length):Rectangle(length, length) { }
	
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
//Rectangle::Rectangle(int w, int h): width(w), height(h);


bool Rectangle::isSquare() { // ���簢���̸� true�� �����ϴ� ��� �Լ�
	// return width == height;
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1; 
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if(rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if(rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}
