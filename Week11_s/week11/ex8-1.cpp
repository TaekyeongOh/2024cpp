#include <iostream>
#include <string>
using namespace std;
// 2������鿡��������ǥ���ϴ�Ŭ����Point ����
class Point {
	int x, y; //����(x,y) ��ǥ��
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	};
};
class ColorPoint : public Point { // 2���� ��鿡�� �÷����� ǥ���ϴ� Ŭ����ColorPoint.Point����� ����
		string color;// ���ǻ�ǥ��
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};
void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point��showPoint() ȣ��
}
int main() {
	Point p; // �⺻Ŭ�����ǰ�ü����
	ColorPoint cp; // �Ļ�Ŭ�����ǰ�ü����
	cp.set(3, 4); // �⺻Ŭ�����Ǹ��ȣ��
	cp.setColor("Red"); // �Ļ�Ŭ�����Ǹ��ȣ��
	cp.showColorPoint(); // �Ļ�Ŭ�����Ǹ��ȣ��
}