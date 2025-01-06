#include <iostream>
using namespace std;

// 클래스 선언부에서 직접 초기화
class Point {
	int x = 0, y = 0;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

// 생성자 코드에서 멤버 변수 초기화

Point::Point(){x = 0; y = 0;}
Point::Point(int a, int b) { x = a; y = b; }


// 생성자 서두에 초깃값으로 초기화
Point::Point() : x(0), y(0) {}
Point::Point(int a, int b) : x(a),y(b) {}


int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}