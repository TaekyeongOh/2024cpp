#include <iostream>
#include <array>
using namespace std;

// 함수의 원형 선언
int addArray(int a[], int size);
void makeDouble(int a[], int size);
void printArray(const int a[], int size);

int main() {
	int n[] = { 1,2,3,4,5 };
	int arrSize = size(n);
	cout << "배열 n의 합은 " << addArray(n, arrSize) << "입니다.\n";

	makeDouble(n, arrSize);
	printArray(n, arrSize);

	return 0;
}

// 함수 정의
int addArray(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	return sum;
}

void makeDouble(int a[], int size) {
	for (int i = 0; i < size; i++)
		a[i] *= 2;
}

void printArray(const int a[], int size) {
	cout << "배열 n 출력 : ";
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << "\n";
}
