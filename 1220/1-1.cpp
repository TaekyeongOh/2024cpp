#include <iostream>
using namespace std;

int main() {
	int* p;

	// int Ÿ�� 1�� �Ҵ� / ���� �޸� �Ҵ�
	p = new int;
	// p�� null�̸� �޸� �Ҵ� ����
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0; // ���α׷� ����
	}

	//�Ҵ� ���� ���� ������ 5 ����
	*p = 5;
	int n = *p; // p�� ����Ű�� �޸��� ���� ���� n�� ����
	cout << "*p=" << *p << endl;
	cout << "n=" << n << endl;

	//�Ҵ���� �޸� ��ȯ
	delete p; // delete �� ������ p�� ���������, p�� ����Ű�� ���� �� �̻� ���� �Ұ���
}