#include <iostream>
using namespace std;

int adder(int x, int y) {
	return x + y;
}

int main() {
	int a, b, sum;
	cout << "�� �� ���� �Է�: " << endl;
	cin >> a >> b;
	sum = a + b;
	cout << "���� " << sum << endl;
	cout << "���� " << adder(a, b);

	return 0;
}