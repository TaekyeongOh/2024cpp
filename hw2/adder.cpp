#include <iostream>
using namespace std;

// 두 개의 정수를 받아 합을 구하고 결과를 리턴하는 함수 adder
int adder(int x, int y) {
	int sum;
	sum = x + y;
	return sum;
}
int main() {
	int n = adder(33, 55);
	cout << "33과 55의 합은 " << n << endl;

	int a, b;
	cout << "두 개의 정수를 입력하세요.";
	cin >> a >> b;
	n = adder(a, b);
	cout << a << "와 " << b << "의 합은 " << n << "이다." << endl;
}
