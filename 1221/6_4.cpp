#include <iostream>
#include <cstring>
using namespace std;

void ment1(int n = 10, char m = ' ');
void ment2(int n = 10, char x = '@');

void ment1(int n, char m) {
	for (int i = 0; i < n; i++)
		cout << m;
	cout << endl;
}
void ment2(int n, char x) {
	for (int i = 0; i < n; i++) {
		for (int c = 0; c < 10; c++) {
			cout << x;
		}
		cout << endl;
	}
}

int main() {
	ment1();
	ment1(10, '%');
	ment2(5, '@');
	return 0;
}