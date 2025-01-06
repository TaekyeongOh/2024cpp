#include <iostream>
using namespace std;

int sum(int a, int b) {
	int sum = 0;
	for (int i = a; i < b+1; i++) {
		sum += i;
	}
	return sum;
}

int sum(int n) {
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100);
}