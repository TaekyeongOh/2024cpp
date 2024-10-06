#include <iostream>
using namespace std;

int main() {
	const double PI = 3.14;
	double radius, area;

	cout << "반지름 입력: ";
	cin >> radius;

	if (radius >= 0) {
		area = radius * radius * PI;
		cout << "The area for the circle of " <<
			"radius " << radius << "is " << area << endl;
	}
	else {
		cout << "입력이 올바르지 않습니다." << endl;
	}
}
