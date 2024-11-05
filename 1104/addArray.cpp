#include <iostream>
using namespace std;

// �Լ��� ���� ����
int addArray(int a[], int size);
void makeDouble(int a[], int size);
void printArray(int a[], int size);

// �迭�� ������ ���޹޾� ���� �����ϴ� �Լ�
int addArray(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	return sum;
}

// �迭�� ���� �� ��� ������Ű�� �Լ�
void makeDouble(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] *= 2;
		// ������ ���� 2�� ����
	}
}

// �迭�� ����ϴ� �Լ�
void printArray(int a[], int size) {
	cout << "�迭 n ��� : ";
	for (int i = 0; i < size; i++) {
		cout << a[i] << ' ';
	}
	cout << "\n";
}

int main() {
	int n[] = { 1,2,3,4,5 };

	int sum = addArray(n, 5);
	cout << "�迭 n�� ���� " << sum << "�Դϴ�.\n";

	makeDouble(n, 5);
	printArray(n, 5);
}