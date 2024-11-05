#include <iostream>
using namespace std;

int main() {
	int i = 10;
	cout << i << endl;

	int newNum1 = 10 * i++;
	cout << newNum1 << endl;
	cout << i << endl;

	int newNum2 = 10 * (++i);

	cout << i << endl;
	cout << newNum1 << endl;
	cout << newNum2 << endl;

	return 0;
}