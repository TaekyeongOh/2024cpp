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

	cout << "Á¤¼ö ÀÔ·Â : " << endl;
	cin >> x;

	(isEven(x) ? (cout << "Â¦¼ö") : (cout << "È¦¼ö"));
}