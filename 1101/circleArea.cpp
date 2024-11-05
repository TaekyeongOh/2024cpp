#include <iostream>
using namespace std;

int main() {
	int r;
	double PI = 3.14;
	double area;

	cout << "원 반지름의 길이는? \n";
	cin >> r;
	area = (r *r) * PI;
	cout << "원의 넓이 : " << area;

}