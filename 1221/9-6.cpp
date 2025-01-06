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
	cout << "�����ϰ��� �ϴ� ���� ������?";
	int n, radius;
	cin >> n;

	//���� ������ 0���Ϸ� �Է��ϸ� ���α׷� ����
	if (n <= 0) return 0;
	//n���� CIrcle�迭 ����
	Circle* pArray = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << " : ";
		cin >> radius;
		//�� Circle��ü�� ���������� �ʱ�ȭ
		pArray[i].setRadius(radius);
	}

	int count = 0;
	Circle* p = pArray;

	for (int i = 0; i < n; i++) {
		double area = p->getArea();
		cout << "��" << i + 1 << "�� ���� : " << area<< endl;

		if (area>= 100 && (area<= 400)) {
			count += 1;
		}
		p++;
	}
	cout << endl << count;

	delete[] pArray;
	return 0;
}