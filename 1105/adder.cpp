#include <iostream>
using namespace std;

int adder(int x, int y) {
	return x + y;
}

int main() {
	int a, b, sum = 0;
	int n = adder(33, 55);
	cout << "33+55= " << n << endl;

	cout << "두 정수 입력 :" << endl;
	cin >> a >> b;

	cout << "두 정수 합 : " << adder(a, b)<<endl;
	n = adder(a, b);
	cout << n << endl;
}