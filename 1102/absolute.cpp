#include <iostream>
using namespace std;

int absolute(int n) {
	if (n >= 0) {
		return n;
	}
	else {
		return (-n);
	}
}

int main() {
	int n;

	cout << "���� �Է��ϼ� : ";
	cin >> n;
	cout << "�Է��� ������ ���밪: " << absolute(n);
}