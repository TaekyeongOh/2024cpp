#include <iostream>
using namespace std;

int main() {
	int a, b, i, sum = 0;

	cout << "�� ���� ���� �Է�";
	cin >> a >> b;
	i = a;
	do {
		sum += i;
		i++;
	} while (i <= b);
	cout << a << "����" << b << "���� �� : " << sum;
}