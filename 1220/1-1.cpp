#include <iostream>
using namespace std;

int main() {
	int* p;

	// int 타입 1개 할당 / 동적 메모리 할당
	p = new int;
	// p가 null이면 메모리 할당 실패
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0; // 프로그램 종료
	}

	//할당 받은 정수 공간에 5 삽입
	*p = 5;
	int n = *p; // p가 가리키는 메모리의 값을 변수 n에 복사
	cout << "*p=" << *p << endl;
	cout << "n=" << n << endl;

	//할당받은 메모리 반환
	delete p; // delete 후 포인터 p는 살아있지만, p가 가리키는 곳에 더 이상 접근 불가능
}