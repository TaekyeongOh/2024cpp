//RectManagerŬ������ ����Լ�  equals()�� RectŬ������ ������ �Լ��� �ۼ��ϱ�. 
#include <iostream>
using namespace std;

class Rect; 

class RectManager { // (1)RectManager Ŭ���� ����
public:
	bool equals(Rect r, Rect s);
};

class Rect { // Rect Ŭ���� ����
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	// (2) ������ �Լ� ����
	friend bool RectManager::equals(Rect r, Rect s);

};

bool RectManager::equals(Rect r, Rect s) { // RectManager::equals() ����
	if(r.width == s.width && r.height == s.height) return true; 
	else return false;
}

int main() {
	Rect a(3,4), b(3,4);
	// (3) RectManager Ŭ���� ��ü ����
	RectManager man;
	// (4) �������Լ� ȣ��
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}