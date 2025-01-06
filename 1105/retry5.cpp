#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int n);
	int isSquare();
};

Rectangle::Rectangle() { width = 1; height = 1; }
Rectangle::Rectangle(int a, int b) { width = a; height = b; }
Rectangle::Rectangle(int n) { width = n; height = n; }

int Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(2,5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형" << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형" << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형" << endl;
}