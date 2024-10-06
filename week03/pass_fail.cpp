#include <iostream>
using namespace std;

double grade;
int main()
{
	cout << "학생의 성적을 입력하시오. ";
	cin >> grade;

	if ((grade >= 70) && (grade <= 100)) {
		cout << "합격입니다.";
	}
	else if ((0 < grade) && (grade < 70)) {
		cout << "불합격입니다.";
	}
	else {
		cout << "성적이 잘못 입력되었습니다.";
	}
}