#include <iostream>
using namespace std;

int g = 20;

int add(int x, int y) {
	return x + y;
}

int main() {
	int a, b, sum;
	cout << "�� ������ �Է��ϼ��� >>";
	cin >> a >> b;

	sum = a + b;

	cout << "���� " << a + b << "\n";
	cout << "���� " << sum<<"\n";
	cout << "���� " << add(a, b) << "\n";
	cout << "�������� g�� ���� " << g;
}