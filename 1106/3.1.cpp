#include <iostream>
using namespace std;

int main() {
	int n[10];
	int i;
	int* p;

	for (i = 0; i < 10; i++) {
		*(n + i) = i * 3;
		// �迭�� �̸� n : �ּ�ó�� ��� ����
		// �迭 n�� 3�� ����� ä��
	}

	p = n;
	for (i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
		// ������ p�� �̿��� �迭 n�� ���� ����
	}
	cout << "\n";

	for (i = 0; i < 10; i++) {
		*p += 2;
		p++;
	}

	for (i = 0; i < 10; i++) {
		cout << n[i] << ' ';
	}
	cout << endl;
}