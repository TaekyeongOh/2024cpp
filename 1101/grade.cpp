#include <iostream>
using namespace std;

int main() {
	int score;

	score = 110;

	while ((score < 0) || (score > 100)) {
		cout << "������ �Է��ϼ���. ";
		cin >> score;
	}
	if (score >= 70) {
		cout << "�հ�";
	}
	else {
		cout << "���հ�";
	}
}