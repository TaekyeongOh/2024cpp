#include <iostream>
using namespace std;

int adder(int x, int y) {
	return x + y;
}

int main() {
	int a, b, sum;
	cout << "두 개 정수 입력: " << endl;
	cin >> a >> b;
	sum = a + b;
	cout << "합은 " << sum << endl;
	cout << "합은 " << adder(a, b);

	return 0;
}