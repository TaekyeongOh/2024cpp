#include <iostream>
using namespace std;

int main() {
	int n[10];
	int i;
	int* p;

	for (i = 0; i < 10; i++) {
		*(n + i) = i * 3;
	}

	p = n;
	// ����Ʈ p�� �迭 n�� ���� �ּҸ� ����Ű�� ��
	for (i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
	}
	cout << endl;

	for (i = 0; i < 10; i++) {
		*p += 2;
		//�����Ͱ� ����Ű�� ���� 2��ŭ ������Ŵ
		p++;
		//�����Ͱ� ���� ��ҷ� �̵�
	}

	for (i = 0; i < 10; i++) {
		cout << n[i] << ' ';
	}
	cout << endl;
}