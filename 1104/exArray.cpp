#include <iostream>
using namespace std;

int main() {
	const int CAPACITY = 10;
	int numbers[CAPACITY];
	int size;

	do {
		cout << "ũ�⸦ �Է��ϼ���(1~10) : ";
		cin >> size;
	} while (size<1 || size>CAPACITY);

	cout << size << "���� ���ڸ� �Է��ϼ���. ";
	for (int i = 0; i < size; i++) {
		cin>>numbers[i];
	}


	cout << "�Է��� ���ڵ��� �Ųٷ� ���: ";
	for (int i = size - 1; i >= 0; i--) {
		cout << numbers[i]<<' ';
	}
	return 0;
}