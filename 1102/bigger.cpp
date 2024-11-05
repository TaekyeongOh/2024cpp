#include <iostream>
using namespace std;

int bigger(int x, int y) {
	int n;
	n = (x > y) ? x : y;
	return n;
}
int divideBy3(int n) {
	if (n % 3 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n,a,b;
	cout << "두 값을 입력하셈: \n";
	cin >> a >> b;

	n = bigger(a, b);

	cout << a << ", " << b << "중에서 더 큰 수 : " << n << endl;
	if (divideBy3(n)){
		cout << n << "은 3의 배수이다.";
	}
	else {
		cout << n << "은 3의 배수가 아니다.";
	}
	
}