#include <iostream>
using namespace std;

// �� ���� ������ �޾� ū ���� �����ϴ� �Լ�
int bigger(int a, int b) {
	if (a > b){
		return a;
	}
	else
		return b;
}

// �Ű� ������ 3���� �������� true, �ƴϸ� false�� �����ϴ� �Լ�
bool divide(int n) {
	if (n % 3 == 0) {
		return true;
	}
	else return false;
}

int main() {
	int a, b, n;
	cout << "�� ���� ������ �Է��ϼ���. ";
	cin >> a >> b;

	n=bigger(a, b);
	cout << a << "�� " << b << "�� �� ū ������ " << n<< "�̴�. ";

	if (n % 3 == 0) {
		cout << n << "�� 3�� ����Դϴ�.";
	}
	else {
		cout << n << "�� 3�� ����� �ƴմϴ�.";
	}
	
}