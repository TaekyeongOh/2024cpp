#include <iostream>
using namespace std;

int main() {
	int n[10];
	int i;
	int* p;

	for (i = 0; i < 10; i++) {
		*(n + i) = i * 3;
		// �迭 �̸� n�� �ּ�ó�� ��� ����. �迭 n�� 3�� ����� ä��
	}

	p = n;
	// ������ p�� �迭 n�� ���� �ּҸ� �����Ѵ�.
	for (i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
		// ������ p�� �̿��� �迭 n�� ���� ����
	}
	cout << endl;

	for (i = 0; i < 10; i++) {
		*p = *p + 2;
		// ������ p�� �̿��� �迭�� ���� ���� 2 ����
		p++;
		// p�� ���� ������ �ּҷ� ����
	}

	for (i = 0; i < 10; i++) {
		cout << n[i] << ' ';
	}
	cout << endl;
}