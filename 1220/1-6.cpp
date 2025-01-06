#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "�����ڽ���radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "�����ڽ���radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��ڽ���radius = " << radius << endl;
}

int main() {
	cout << "�����ϰ��� �ϴ� ���� ������?";
	int n, radius;
	cin >> n;

	//���� ������ 0���Ϸ� �Է��ϸ� ���α׷� ���� if��
	if (n <= 0) {
		cout << "�� ������ 0 �����̹Ƿ� ���α׷� ����";
		return 0;
	}
	//n���� Circle �迭 ����
	Circle *pArray=new Circle[n];

	for (int i = 0; i < n; i++) {
		//������Ʈ ���
		cout << "��" << i + 1 << " : ";
		//������ �Է�
		cin >> radius;
		//�� CIrcle��ü�� ���������� �ʱ�ȭ
		pArray[i].setRadius(radius);
	}

	int count = 0;
	Circle* p = pArray;

	//���� ���� ��°� ���ǹ� �ۼ�(for, if��)
	for (int i = 0; i < n; i++) {
		double area = p->getArea();
		//���� ���� ���
		cout << area << " ";
		//if ���ǹ�
		if (area >= 100 && area <= 200) {
			count++;
		}
		p++;
	}

	cout << endl << "������ 100���� 200 ������ ���� ���� : " << count << endl;

	//��ü �迭 �Ҹ�
	delete[]pArray;

	return 0;
}