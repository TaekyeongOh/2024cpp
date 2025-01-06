#include <iostream>
#include <string>
using namespace std;

class Point { 
	int x, y;
public:
	Point(int x, int y) {
		this->x = x; this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

//------- 상속받은 ColorPoint 클래스 작성하기-> 클래스 선언에 구현코드 작성(inline 함수)



int main() {
	ColorPoint cp(5, 5, "RED");
	cp.show(); // 출력함수
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}