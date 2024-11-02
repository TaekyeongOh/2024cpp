#include <iostream>
using namespace std;

class Rectangle {
private:
	int width;
	int height;
public:
	int getArea();
	void setW(int w);
	void setH(int h);
};

int Rectangle :: getArea() {
	return width*height;
}

void Rectangle::setW(int w) {
	width = w;
}

void Rectangle::setH(int h) {
	height = h;
}


int main() {
	Rectangle rect;
	rect.setW(3);
	rect.setH(5);
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}