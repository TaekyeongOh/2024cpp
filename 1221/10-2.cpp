#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	cout << "��ȣ" << endl;
	while (true) {
		cout << "��ȣ �Է� : ";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "����";
			break;
		}
		else {
			cout << "��ȣ Ʋ��";
		}
	}
}