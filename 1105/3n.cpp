#include <iostream>
using namespace std;

int main() {
	int a;

	while (true) {
		cout << "정수 입력 : " << endl;
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