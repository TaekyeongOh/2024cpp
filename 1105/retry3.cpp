
class Point {
	int x = 0;
	int y = 0;
};
Point::Point() { x = 0, y = 0; }
Point::Point(int a, int b) { x = a, y = b; }

Point::Point() :x(0), y(0) {}
Point::Point(int a, int b) x(a), y(b) {}

