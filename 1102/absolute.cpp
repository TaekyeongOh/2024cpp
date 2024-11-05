#include <iostream>
using namespace std;

int absolute(int n) {
	if (n >= 0) {
		return n;
	}
	else {
		return (-n);
	}
}

int main() {
	int n;

	cout << "정수 입력하셈 : ";
	cin >> n;
	cout << "입력한 정수의 절대값: " << absolute(n);
}