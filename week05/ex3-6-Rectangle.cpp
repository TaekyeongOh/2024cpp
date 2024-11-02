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

//기본 생성자: width와 height 1로 초기화
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


bool Rectangle::isSquare() { // 정사각형이면 true를 리턴하는 멤버 함수
	// return width == height;
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1; 
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if(rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
