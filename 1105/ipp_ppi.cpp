#include <iostream>
using namespace std;

int main() {
	int i = 10;
	int newNum = 10 * i++;

	cout << newNum;

	int j = 10;
	int newNum2 = 10 * (++j);

	cout << newNum2;
}