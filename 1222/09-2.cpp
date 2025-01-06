#include <iostream>
using namespace std;

int main() {
	cout << "입력할정수의개수는?";
	int n;
	cin >> n;     // 정수의개수입력
	if (n <= 0) return 0;

	int* p = new int[n];
	if (!p) {
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << " : ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << sum;
	delete[]p;
}