#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
};

// (1) 생성자 코드에서 멤버 변수 초기화
Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b; }

// (2) 생성자 서두에 초깃값으로 초기화
Point::Point() :x(0), y(0) {
}
Point::Point(int a, int b)
	: x(a), y(b) {
}

// (3) 클래스 선언부에서 직접 초기화
class Point {
	int x = 0, y = 0;
public:
	Point();
	Point(int a, int b);
};