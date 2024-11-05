#include <iostream>
using namespace std;

int main() {
	int year;

	cout << "년도를 입력하세요.";
	cin >> year;

	bool isLeapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

	if (isLeapYear)
		cout << "윤년입니다.";
	else {
		cout << "윤년이 아닙니다.";
	}

	return 0;
}