#include <iostream>
using namespace std;

bool equalArray(int *p, int *q, int a);

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 1,2,3,4,3 };

	if (equalArray(a, b, 5)) cout << "equal" << endl;
	else cout << "not equal";
}

bool equalArray(int *p, int *q, int a) {
	int i;
	for (i = 0; i < a; i++) {
		if (*(i+p)!= *(q+i)) return false;
	}
	return true;
}