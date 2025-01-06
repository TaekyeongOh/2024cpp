#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	//Circle circleArray[3];

	//circleArray[0].setRadius(10);
	//circleArray[1].setRadius(20);
	//circleArray[2].setRadius(30);

	Circle circleArray[3] = { Circle(10),Circle(20),Circle() };

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	}

	// 객체 포인터로 배열 접근 코드 작성
	Circle* p = circleArray;  // 객체 배열의 첫 번째 원소를 가리키는 포인터

	// 객체 포인터를 이용해 면적 출력
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << (p + i)->getArea() << endl;
	}

	return 0;
}