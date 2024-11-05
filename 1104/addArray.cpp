#include <iostream>
using namespace std;

// 함수의 원형 선언
int addArray(int a[], int size);
void makeDouble(int a[], int size);
void printArray(int a[], int size);

// 배열과 개수를 전달받아 합을 리턴하는 함수
int addArray(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	return sum;
}

// 배열의 값을 두 배로 증가시키는 함수
void makeDouble(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] *= 2;
		// 원소의 값을 2배 증가
	}
}

// 배열을 출력하는 함수
void printArray(int a[], int size) {
	cout << "배열 n 출력 : ";
	for (int i = 0; i < size; i++) {
		cout << a[i] << ' ';
	}
	cout << "\n";
}

int main() {
	int n[] = { 1,2,3,4,5 };

	int sum = addArray(n, 5);
	cout << "배열 n의 합은 " << sum << "입니다.\n";

	makeDouble(n, 5);
	printArray(n, 5);
}