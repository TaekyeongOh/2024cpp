#include <iostream>
using namespace std;

int main() {
	char choice;

	do {
		cout << "계속을 원하면 y 입력하세요. ";
		cin >> choice;
	} while (choice != 'y');

	cout << "프로그램을 종료합니다.";
	return 0;
}