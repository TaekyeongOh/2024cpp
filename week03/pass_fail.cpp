#include <iostream>
using namespace std;

double grade;
int main()
{
	cout << "�л��� ������ �Է��Ͻÿ�. ";
	cin >> grade;

	if ((grade >= 70) && (grade <= 100)) {
		cout << "�հ��Դϴ�.";
	}
	else if ((0 < grade) && (grade < 70)) {
		cout << "���հ��Դϴ�.";
	}
	else {
		cout << "������ �߸� �ԷµǾ����ϴ�.";
	}
}