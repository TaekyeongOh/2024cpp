#include <iostream>
using namespace std;

#include "CALCULATOR.H"
#include "Adder.h"


void Calculator::run() {
	cout << "두 개의 수를 입력 : ";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}
