#include <iostream>
using namespace std;

double getArea(int x) {
	return 3.14 * x * x;
}

int main() {
	int r;
	do {
		cout << "반지름 :" << endl;
		cin >> r;
	} while ((r < 0));
	
	cout << "원의 넓이 :" << getArea(r);
	
}