// equalArray() 함수의 매개변수를 포인터 타입으로 선언, 재작성하기
/*
#include <iostream>
using namespace std;

bool equalArray(int p[], int q[], int size); // 함수의 원형 선언

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 1,2,3,4,5 };

	if (equalArray(a, b, 5))
		cout << "arrays equal" << "\n";
	else
		cout << "arrays not equal" << "\n";
}

bool equalArray(int p[], int q[], int size) {
	for (int i = 0; i < size; i++)
		if (p[i] != q[i]) return false;
	return true;
}
*/

#include <iostream>
using namespace std;

bool equalArray(int* p, int* q, int size); // 함수의 원형 선언

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 1, 2, 3, 4, 5 };

	if (equalArray(a, b, 5))
		cout << "arrays equal" << "\n";
	else
		cout << "arrays not equal" << "\n";

	return 0;
}

bool equalArray(int* p, int* q, int size) {
	for (int i = 0; i < size; i++)
		if (p[i] != q[i])
			return false;
	return true;
}
