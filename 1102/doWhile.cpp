#include <iostream>
using namespace std;

int main() {
	int a, b, i, sum = 0;

	cout << "두 개의 정수 입력";
	cin >> a >> b;
	i = a;
	do {
		sum += i;
		i++;
	} while (i <= b);
	cout << a << "에서" << b << "까지 합 : " << sum;
}