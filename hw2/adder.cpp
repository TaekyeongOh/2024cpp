#include <iostream>
using namespace std;

// �� ���� ������ �޾� ���� ���ϰ� ����� �����ϴ� �Լ� adder
int adder(int x, int y) {
	int sum;
	sum = x + y;
	return sum;
}
int main() {
	int n = adder(33, 55);
	cout << "33�� 55�� ���� " << n << endl;

	int a, b;
	cout << "�� ���� ������ �Է��ϼ���.";
	cin >> a >> b;
	n = adder(a, b);
	cout << a << "�� " << b << "�� ���� " << n << "�̴�." << endl;
}
