#include <iostream>
using namespace std;

int main() {
    // �ּ� �Է�
    cout << "�ּҸ� �Է��ϼ���: ";
    char address[100];
    cin.getline(address, 100, '\n');
    cout << "�ּҴ� " << address << "�Դϴ�.\n\n";

    // �̸� �Է� (5��)
    char name[5][11]; // �� �̸��� �ִ� 10��
    for (int i = 0; i < 5; i++) {
        cout << "�̸� �Է� (" << i + 1 << "): ";
        cin.getline(name[i], 11);
    }

    // �̸� ���
    cout << "\n�Էµ� �̸�:\n";
    for (int i = 0; i < 5; i++) {
        cout << "- " << name[i] << endl; // �� �̸� ��� �� �ٹٲ�
    }

    return 0;
}
