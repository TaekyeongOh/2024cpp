#include <iostream>
using namespace std;

int year;

int main() {
	cout << "�⵵ 4�ڸ��� �Է��ϼ���.";
	cin >> year;

	bool isLeapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

	// if else ����

	/*
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		cout<<"�����Դϴ�.";
	}
	else {
		cout<<"������ �ƴմϴ�.";
	}
	*/


	// ���׿����� ����

	cout << year << "�� " << ((isLeapYear) ? "�����Դϴ�." : "������ �ƴմϴ�.") << endl;
}