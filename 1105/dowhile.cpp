#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;

	cout << "�� ���� ���� �Է� : " << endl;
	cin >> a >> b;
	i = a;
	
	do {
		sum += i;
		i++;
	} while (i <= b);

	cout << "�� �� : " << sum;
}