#include <iostream>
using namespace std;

int main() {
	int a = 1 , sum = 0;

	while (true) {
		sum += a;
		if (sum >= 20) {
			break;
		}
		a++;
	}

	cout << "���� 20 �̻��� �Ǵ� ������ ��: " << sum << endl;
}