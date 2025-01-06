#include <iostream>
using namespace std;

bool equal(int* a, int* b);

int main() {
	int a = 5;
	int b = 9;

	if (equal(&a, &b))cout << "equal";
	else cout<<"not";
}

bool equal(int* a, int* b) {
	return (a == b);
}