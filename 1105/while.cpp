#include <iostream>
using namespace std;

int main() {
	int a, b, i, sum = 0;

	cout << "���� �� �� �Է� :" << endl;
	cin >> a >> b;

	i = a;
	while (i <= b) {
		sum += a;
		a++;
	}
	cout << "�� : " << sum;
}