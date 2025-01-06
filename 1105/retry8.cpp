#include <iostream>
using namespace std;

int main() {
	int a[10];
	int b[] = { 0.1,0.2,0.5,3.9 };

	int i;
	for (i = 0; i < 10; i++) {
		a[i] = i*2;
	}
	for (i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}

	double sum = 0;
	for (int j = 0; j < 4; j++) {
		sum += b[j];
	}
	cout << sum;
}