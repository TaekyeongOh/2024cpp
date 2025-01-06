#include <iostream>
using namespace std;

bool equal(int* a, int* b);

int main() {
	int x = 5;
	int y = 4;

	if (equal(&x, &y)) {
		cout << "equal";
	}
	else {
		cout << "not equal";
	}
}

bool equal(int* a, int* b) {
	if (*a == *b) return true;
	else return false;
}