#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}

int main() {
	Circle waffle(5);
}