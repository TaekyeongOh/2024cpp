#include <iostream>
using namespace std;

#include "Cal.h"
#include "Adder.h"

void Calculator::run() {
	cout << "두 개의 수 입력 : ";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}