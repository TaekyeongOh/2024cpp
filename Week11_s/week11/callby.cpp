#include <iostream>
#include <string>
using namespace std;

void reverse(string& strg) {
	string temp(strg);
	int size = strg.size();
	for (int i = 0; i < size; i++) {
		strg[i]= temp[size - i - 1];
	}
}

int main() {
	string strg;
	cout << "���ڿ��� �Է��ϼ��� : ";
	getline(cin, strg);
	cout << "���� ���ڿ� : " << strg << endl;

	reverse(strg);
	cout << "������ ���ڿ� : " << strg;
	return 0;
}