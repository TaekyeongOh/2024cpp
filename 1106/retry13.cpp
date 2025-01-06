#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circles[2][3];

	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(10);
	circles[2][1].setRadius(20);
	circles[3][2].setRadius(30);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << circles[i][j].getArea();
		}
	}
}