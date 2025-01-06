#include <iostream>
using namespace std;

int main() {
	int a[10];
	int d[] = { 0.1,0.2,0.5,3.9 };

	int i;
	for (i = 0; i < 10; i++) {
		a[i] = i * 2;
	}
	for (i = 0; i < 10; i++) {
		cout << *(a+i) << ' ' << endl;
	}

	double sum = 0;
	for (i = 0; i < 4; i++) {
		sum += *(d+i);
	}
	cout << sum;

}