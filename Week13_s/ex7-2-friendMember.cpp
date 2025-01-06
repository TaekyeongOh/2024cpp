//RectManager클래스의 멤버함수  equals()을 Rect클래스의 프렌드 함수로 작성하기. 
#include <iostream>
using namespace std;

class Rect; 

class RectManager { // (1)RectManager 클래스 선언
public:
	bool equals(Rect r, Rect s);
};

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	// (2) 프렌드 함수 선언
	friend bool RectManager::equals(Rect r, Rect s);

};

bool RectManager::equals(Rect r, Rect s) { // RectManager::equals() 구현
	if(r.width == s.width && r.height == s.height) return true; 
	else return false;
}

int main() {
	Rect a(3,4), b(3,4);
	// (3) RectManager 클래스 객체 생성
	RectManager man;
	// (4) 프렌드함수 호출
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}