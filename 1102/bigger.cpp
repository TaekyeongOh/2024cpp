#include <iostream>
using namespace std;

int bigger(int x, int y) {
	int n;
	n = (x > y) ? x : y;
	return n;
}
int divideBy3(int n) {
	if (n % 3 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n,a,b;
	cout << "�� ���� �Է��ϼ�: \n";
	cin >> a >> b;

	n = bigger(a, b);

	cout << a << ", " << b << "�߿��� �� ū �� : " << n << endl;
	if (divideBy3(n)){
		cout << n << "�� 3�� ����̴�.";
	}
	else {
		cout << n << "�� 3�� ����� �ƴϴ�.";
	}
	
}