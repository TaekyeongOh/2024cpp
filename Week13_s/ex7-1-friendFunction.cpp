// Rect객체 2개를 비교하는 외부함수 equals()를 프렌드 함수로 작성하기. 
#include <iostream>
using namespace std;

class Rect; // Rect 클래스를 참조하는 전방 참조(forward reference) 문제 발생 방지
bool equals(Rect r, Rect s); // equals() 함수 선언

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height;}
	// (1) 프렌드 함수 선언
	friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) { // (2) 외부함수 구현
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3,4), b(4,5);
	if(equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}