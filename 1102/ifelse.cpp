#include <iostream>
using namespace std;

int main() {
	int score;
	char grade;

	cout << "������ �Է��ϼ���.";
	cin >> score;

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else
		grade = 'F';

	cout << "Your grade: " << grade;
}