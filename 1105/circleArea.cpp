#include <iostream>
using namespace std;

double getArea(int x) {
	return 3.14 * x * x;
}

int main() {
	int r;
	do {
		cout << "������ :" << endl;
		cin >> r;
	} while ((r < 0));
	
	cout << "���� ���� :" << getArea(r);
	
}