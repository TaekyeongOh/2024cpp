#include <iostream>
using namespace std;

// �����͸� ����Ͽ� �� ������ ���ϴ� �Լ�
bool equal(int* a, int* b);

int main() {
    int x = 5;
    int y = 2;

    // �����͸� �����Ͽ� �Լ� ȣ��
    if (equal(&x, &y)) { // &x, &y�� x�� y�� �ּҸ� ����
        cout << "equal" << endl;
    }
    else {
        cout << "not equal" << endl;
    }

    return 0;
}

// �����͸� ����Ͽ� �� ������ ���� ���ϴ� �Լ�
bool equal(int* a, int* b) {
    if (*a == *b) { // �����͸� �������Ͽ� �� ��
        return true;
    }
    else {
        return false;
    }
}
