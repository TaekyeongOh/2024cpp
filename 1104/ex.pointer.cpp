#include <iostream>
using namespace std;

int main() {
	int n = 25;
	char c = 'A';
	double d = 3.14;

	int *p=&n;
	char * q = &c;
	double* r = &d;

	int m = *p + 10;

	cout << n << ' ' << *p << "\n";
	cout << c << ' ' << *q << "\n";
	cout << d << ' ' << *r << endl;
	cout << m << endl;
}