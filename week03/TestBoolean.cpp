#include <iostream>
using namespace std;

int num;

int main() {
	cout << "���ڸ� �Է��ϼ���. ";
	cin >> num;

	bool isEvenNum = (num % 2 == 0);

	cout << (isEvenNum ? "¦���Դϴ�." : "Ȧ���Դϴ�.") << endl;

}