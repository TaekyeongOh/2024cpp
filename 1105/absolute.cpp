#include <iostream>
using namespace std;

void absolute(int x);

int main() {
	int num;

	cout << "������ �Է��ϼ��� : " << endl;
	cin >> num;

	absolute(num);
}

void absolute(int x) {
	if (x >= 0) {
		cout << x;
	}
	else {
		cout << -x;
	}
}