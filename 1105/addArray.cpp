#include <iostream>
using namespace std;

int addArray(int a[], int size);
void makeDouble(int a[], int size);
void printArray(int a[], int size);


int main() {
	int n[] = {1,2,3,4,5};
	int sum = addArray(n, 5);
	cout << "�迭 n�� ���� " << sum << "�Դϴ�." << endl;

	makeDouble(n, 5);
	printArray(n, 5);
}

int addArray(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}
	return sum;
}

void makeDouble(int a[], int size) {
	for (int i = 0; i < 5; i++) {
		a[i] *= 2;
	}
}

void printArray(int a[], int size) {
	cout << "�迭 n ��� : ";
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}
}