#include <iostream>
using namespace std;

int number;

int main() {
	cout << "�������� �Է��ϼ���. ";
	cin >> number;

	if (number < 0) {
		number = -number;
	}


	cout << "�Է��� ������ ���밪 = " << number << endl;
}