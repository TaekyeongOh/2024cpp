#include <iostream>
using namespace std;

int main() {
	int year;

	cout << "�⵵�� �Է��ϼ���.";
	cin >> year;

	bool isLeapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

	if (isLeapYear)
		cout << "�����Դϴ�.";
	else {
		cout << "������ �ƴմϴ�.";
	}

	return 0;
}