#include <iostream>
using namespace std;

int adder(int x, int y) {
	return x + y;
}

int main() {
	int a, b, sum = 0;
	int n = adder(33, 55);
	cout << "33+55= " << n << endl;

	cout << "�� ���� �Է� :" << endl;
	cin >> a >> b;

	cout << "�� ���� �� : " << adder(a, b)<<endl;
	n = adder(a, b);
	cout << n << endl;
}