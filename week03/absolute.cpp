#include <iostream>
using namespace std;

int number;

int main() {
	cout << "정수값을 입력하세요. ";
	cin >> number;

	if (number < 0) {
		number = -number;
	}


	cout << "입력한 숫자의 절대값 = " << number << endl;
}