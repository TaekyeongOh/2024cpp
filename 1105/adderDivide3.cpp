#include <iostream>
using namespace std;

int bigger(int a, int b) {
	if (a > b)
		return a;
	else return b;
}

int divide3(int n) {
	if (n % 3==0) {
		return true;
	}
	else return false;
}

int main() {
	int a, b, n;

	cout << "두 정수 입력 :" << endl;
	cin >> a >> b;
	n = bigger(a,b);

	if (divide3(n)) {
		cout << "3의 배수";
	}
	else {
		cout << "3의 배수 아님";
	}
}