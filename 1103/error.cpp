#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError() {
	a = 1;
	b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}

void PrivateAccessError::f() {
	a = 5;
	b = 5;
}

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}

int main() {
	PrivateAccessError objA;
	// PrivateAccessError()는 private으로 선언되어 클래스 외부에서 직접 호출 불가/ 즉 private 생성자 호출 오류
	PrivateAccessError objB(100);
	objB.a = 10;
	// a는 private 멤버 변수이므로 클래스 외부에서 직접 접근할 수 없음 / 즉 private 멤버 변수 접근 오류
	objB.b = 20;
	objB.f();
	// f() 메서드는 private 선언되어 클래스 외부에서 호출 불가능 / 즉 private 메서드 호출 오류
	objB.g();
}