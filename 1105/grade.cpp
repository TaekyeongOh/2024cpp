#include <iostream>
using namespace std;

int main() {
	int score;
	char grade;
	do {
		cout << "점수 입력 :" << endl;
		cin >> score;
	} while ((score > 100) || (score < 0));
		
switch (score / 10) {
	case10:
	case9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}

	cout << "score :" << score << endl;
	cout << "grade :" << grade << endl;
}