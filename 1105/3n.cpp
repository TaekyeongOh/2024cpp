#include <iostream>
using namespace std;

int main() {
	int a;

	while (true) {
		cout << "���� �Է� : " << endl;
		cin >> a;
		if (a == 0) {
			break;
		}
		if (a % 3 != 0) {
			cout << "No";
			continue;
		}
		
		cout << "Yes";
	}
}