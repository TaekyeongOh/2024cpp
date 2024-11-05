#include <iostream>
using namespace std;

int main() {
	int score;

	score = 110;

	while ((score < 0) || (score > 100)) {
		cout << "성적을 입력하세요. ";
		cin >> score;
	}
	if (score >= 70) {
		cout << "합격";
	}
	else {
		cout << "불합격";
	}
}