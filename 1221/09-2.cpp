#include <iostream>
using namespace std;

int main() {
	cout << "�Է��� ���� ���� :";
	int n;
	cin >> n;
	if (n <= 0) { return 0; }

	//n���� ���� �迭 ���� �Ҵ�
	int* p = new int[n];
	if (!p) {
		cout << "�޸� �Ҵ� �Ұ�";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		//������Ʈ ���
		cout << i + 1 << "��° ���� : ";
		//Ű����κ��� ���� �Է�
		cin >> p[i];
	}

	//�����ͷ� �迭�� ������ �� ���ϰ� ����ϱ�
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "�� = " << sum << endl;
	//�迭 �޸� ��ȯ
	delete[] p;
	return 0;
}