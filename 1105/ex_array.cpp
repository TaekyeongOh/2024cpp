#include <iostream>
using namespace std;

int main() {
	int a;
	int array[5];
	do {
		cout << "ũ�⸦ �Է��ϼ���(1~10) : " << endl;
		cin >> a;
	} while ((a < 1) || (a > 10));

	cout << a<<"���� ���ڸ� �Է��ϼ��� : ";
	for (int i = 0; i < a; i++) {
		cin >> array[i];
	}

	cout << "�Է��� ���ڵ��� �Ųٷ� ��� : ";
	for (int i = a-1; i >= 0; i--) {
		cout << array[i]<<' ';
	}
	
}