#include <iostream>
using namespace std;

bool isEven(int x) {
	if (x % 2) {
		return false;
	}
	else {
		return true;
	}
}

int main() {
	int x;

	cout << "���� �Է� : " << endl;
	cin >> x;

	(isEven(x) ? (cout << "¦��") : (cout << "Ȧ��"));
}