#include <iostream>
using namespace std;

int main() {
	int a[10];
	double d[] = { 0.1,0.2,0.5,3.9 };

	for (int i = 0; i < 10; i++) {
		a[i] = i*2;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}

	double sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += d[i];
	}
	cout << sum;
}