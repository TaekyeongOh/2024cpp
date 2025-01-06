#include <iostream>
using namespace std;

int main() {
	int a, b, i, sum = 0;

	cout << "정수 두 개 입력 :" << endl;
	cin >> a >> b;

	i = a;
	while (i <= b) {
		sum += a;
		a++;
	}
	cout << "합 : " << sum;
}