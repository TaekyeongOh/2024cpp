#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle(): width(1),height(1){}
	Rectangle(int a, int b):width(a),height(b){}
	Rectangle(int x) :width(x), height(x){}
	bool isSquare() {
		return (width == height);
	}
};

int main() {
	Rectangle rect1;
	Rectangle rect2(2, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형" << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형" << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형" << endl;
}