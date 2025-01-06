#include <iostream>
using namespace std;

bool equal(int* a, int* b);

int main() {
	int x = 5;
	int y = 6;
	if (equal(&x, &y)) cout << "equal";
	else cout << "not equal";
}

bool equal(int* a, int* b) {
	return *a == *b;
}