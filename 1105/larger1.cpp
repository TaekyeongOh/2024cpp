#include <iostream>
using namespace std;

int larger(int a, int b) {
	int n;
	if (a > b) {
		n = a;
		return n;
	}
	else if (a==b){
		n = b;
		return n;
	}
	else {
		n = b;
		return n;
	}
}

int main() {
	int a, b,n;
	cout << "�� �� �Է� :" << endl;
	cin >> a >> b;

	cout << a << "�� " << b << "�߿��� �� ū �� : " << larger(a, b);
}