#include <iostream>
using namespace std;

int main() {
	const double PI = 3.14;
	double radius, area;

	cout << "������ �Է�: ";
	cin >> radius;

	if (radius >= 0) {
		area = radius * radius * PI;
		cout << "The area for the circle of " <<
			"radius " << radius << "is " << area << endl;
	}
	else {
		cout << "�Է��� �ùٸ��� �ʽ��ϴ�." << endl;
	}
}
