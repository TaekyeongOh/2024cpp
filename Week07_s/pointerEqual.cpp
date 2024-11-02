//포인터로 정수 2개 전달받아 두수를 비교하는 equal() 작성하기.

#include <iostream>
using namespace std;

bool equal(int p, int q); // 함수의 원형 선언

int main() {
	int a=5, b=6;
	if(equal(a, b)) cout << "equal" << "\n";
	else cout << "not equal" << "\n";
}

bool equal(int p, int q) { // 포인터 매개 변수
	if(p == q) return true;
	else return false;
}