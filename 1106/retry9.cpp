#include <iostream>
using namespace std;

bool equal(int a, int b);

int main() {
	int a = 5, b = 6;
	if (equal(a, b)) cout << "equal";
	else cout << "Not equal";
}

bool equal(int a, int b) {
	return a == b;
}