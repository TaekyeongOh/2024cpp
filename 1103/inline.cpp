#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	// 1���� 10000������ Ȧ���� �� ���
	for (int i = 1; i <= 10000; i++) {
		if (i%2) {
			sum += i;
		}
	}
	cout << sum;
}