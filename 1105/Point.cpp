#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
};

Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b; }

Point::Point() : x(0), y(0) {}
Point::Point::Point(int a, int b) : x(a),y(b){}

class Point {
	int x = 0 y = 0;

public:
	//
};