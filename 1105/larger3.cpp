#include <iostream>
using namespace std;

int main() {
	int a, b,larger;
	cout << "�� �� �Է� :" << endl;
	cin >> a >> b;
	(a > b) ? larger=a : larger=b;

	cout << a << "�� " << b << "�߿��� �� ū �� : " << larger;
}