#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	// 1에서 10000까지의 홀수의 합 계산
	for (int i = 1; i <= 10000; i++) {
		if (i%2) {
			sum += i;
		}
	}
	cout << sum;
}