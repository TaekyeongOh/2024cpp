#include <iostream>
using namespace std;

int main() {
	int num;

	do{
		cout << "숫자를 입력하세요(0입력시 종료)";
		cin >> num;
	} while (num != 0);
	
	cout << "프로그램이 종료됨" << endl;
	return 0;
}