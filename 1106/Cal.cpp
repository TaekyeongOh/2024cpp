#include <iostream>
using namespace std;

#include "Cal.h"
#include "Adder.h"

void Calculator::run() {
	cout << "�� ���� �� �Է� : ";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}