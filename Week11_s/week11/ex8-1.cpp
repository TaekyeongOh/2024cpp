#include <iostream>
#include <string>
using namespace std;
// 2차원평면에서한점을표현하는클래스Point 선언
class Point {
	int x, y; //한점(x,y) 좌표값
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	};
};
class ColorPoint : public Point { // 2차원 평면에서 컬러점을 표현하는 클래스ColorPoint.Point를상속 받음
		string color;// 점의색표현
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};
void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의showPoint() 호출
}
int main() {
	Point p; // 기본클래스의객체생성
	ColorPoint cp; // 파생클래스의객체생성
	cp.set(3, 4); // 기본클래스의멤버호출
	cp.setColor("Red"); // 파생클래스의멤버호출
	cp.showColorPoint(); // 파생클래스의멤버호출
}