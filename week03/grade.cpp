#include <iostream>
using namespace std;


int main() {

	int score;
	char grade;

	cout << "점수를 입력하세요.";
	cin >> score;

	if (score < 0 || score>100)
	{
		cout << "잘못된 점수입력입니다.\n";
		return 0;
	}
	
	switch (score/10)
	{
	case 10:grade = 'A';
		break;
	case 9:grade = 'B';
		break;
	case 8:grade = 'C';
		break;
	case 7:grade = 'D';
		break;
	default: grade = 'F';
	}

	/*
	if ((grade >= 90) && (grade <= 100)) {
		grade = 'A';
	}
	else if ((grade >= 80) && (grade <= 89)) {
		grade = 'B';
	}
	else if ((grade >= 70) && (grade <= 79)) {
		grade = 'C';
	}
	else if ((grade >= 60) && (grade <= 69)) {
		grade = 'D';
	}
	else if ((grade >= 0) && (grade <= 59)) {
		grade = 'F';
	}
	*/



	cout << "학점은 " << grade << " 입니다. " << endl;
}