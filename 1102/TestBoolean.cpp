#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "���� �Է��ϼ���. ";
	cin >> num;

	bool isabs = (num >= 0);

	if (isabs) {
		cout << "���� : " << num;
	}
	else {
		cout << "���� : " << (-num);
	}
}