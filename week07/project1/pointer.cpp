#include <iostream>
using namespace std;

int main() {
	int n = 10, m;
	char c = 'A';
	double d;

	//p�� n�� �ּҰ��� ����
	int* p = &n;
	//q�� c�� �ּҰ��� ����
	char* q = &c;
	//r�� d�� �ּҰ��� ����
	double* r = &d;
	//n�� 25�� �����
	*p = 25;
	//c�� ���� 'A'�� �����
	*q = 'A';
	//d�� 3.14�� �����
	*r = 3.14;
	//p�� ����Ű�� ��(n ������)+10�� m�� ����
	m = *p + 10;

	cout << n << ' ' << *p << "\n"; // �� �� 25 ��µ�
	cout << c << ' ' << *q << "\n"; // �� �� 'A'��µ�
	cout << d << ' ' << *r << "\n"; // �� �� 3.14�� ��µ�
	cout << m <<"\n"; // m�� 35 ��µ�

}