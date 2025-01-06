#include <iostream>
using namespace std;

int main() {
	int* p;
	p = new int;
	if (!p) {
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << *p;
	cout << n;
}