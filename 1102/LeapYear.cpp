#include <iostream>
using namespace std;

int main() {
	int year;

	cout << "�⵵�� �Է��ϼ���.";
	cin >> year;

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		cout << "�����Դϴ�.";
	else {
		cout << "������ �ƴմϴ�.";
	}

	return 0;
}