#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int res = a[0];
	for (int i = 1; i < 5; i++) {
		if (a[0] < a[i]) return a[i];
	}
	return res;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(3, 5)<<endl;
	cout << big(array, 5);
}