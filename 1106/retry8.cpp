#include <iostream>
using namespace std;

int main() {
	int n[10];
	int i;
	int* p;

	for (i = 0; i < 10; i++) {
		*(n + i) = i * 3;
	}

	p = n;
	// 포인트 p가 배열 n의 시작 주소를 가리키게 함
	for (i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
	}
	cout << endl;

	for (i = 0; i < 10; i++) {
		*p += 2;
		//포인터가 가리키는 값을 2만큼 증가시킴
		p++;
		//포인터가 다음 요소로 이동
	}

	for (i = 0; i < 10; i++) {
		cout << n[i] << ' ';
	}
	cout << endl;
}