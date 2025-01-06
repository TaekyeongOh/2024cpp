#include <iostream>
using namespace std;

bool equal(int x, int y);

int main() {
	int a = 5, b = 7;
	if (equal(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}

bool equal(int x, int y) {
	if (x == y) return true;
	else return false;
}