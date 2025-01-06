#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    ~Circle() { }
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
    radius = 1;
}

int main() {
    cout << "�����ϰ��� �ϴ� ���� ����? ";
    int n, radius;
    cin >> n; // ���� ���� �Է�

    // ���� ������ 0 ���Ϸ� �Է��ϸ�, ���α׷� ����: if��
    if (n <= 0) {
        cout << "�� ������ 0 �����̹Ƿ� ���α׷��� �����մϴ�." << endl;
        return 0;
    }

    // n ���� Circle �迭 ����
    Circle* pArray = new Circle[n];

    for (int i = 0; i < n; i++) {
        // ������Ʈ ���
        cout << "��" << i + 1 << ": ";
        // ������ �Է�
        cin >> radius;
        // �� Circle ��ü�� ���������� �ʱ�ȭ
        pArray[i].setRadius(radius);
    }

    int count = 0; // ī��Ʈ ����
    Circle* p = pArray;

    // ���� ���� ��°� ���ǹ� �ۼ�(for, if��)
    for (int i = 0; i < n; i++) {
        double area = p->getArea();
        // ���� ���� ���
        cout << area << " ";
        // if��
        if (area >= 100 && area <= 200) {
            count++;
        }
        p++;
    }

    cout << endl;
    cout << "������ 100���� 200 ������ ���� ����: " << count << endl;

    // ��ü �迭 �Ҹ�
    delete[] pArray;

    return 0;
}
