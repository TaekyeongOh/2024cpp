#include <iostream>
using namespace std;

class Private {
private:
	int a;
	void f();
	Private();

public:
	int b;
	Private(int x);
	void g();
};

Private::Private() {
	a = 1;
	b = 1;
}

Private::Private(int x) {
	a = x;
	b = x;
}

void Private::f() {
	a = 5;
	b = 5;
}

void Private::g() {
	a = 6;
	b = 6;
}

int main() {
	Private objA;
	Private objB(100);
	objB.a = 10;
	objB.b = 20;
	objB.f();
	objB.g();
})