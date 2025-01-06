#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	~Circle() { }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
}
int main() {
	cout << "생성하고자 하는 원의 개수는?";
	int n, radius;
	cin >> n;

	//원의 개수를 0이하로 입력하면 프로그램 종료
	if (n <= 0) return 0;
	//n개의 CIrcle배열 생성
	Circle* pArray = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << " : ";
		cin >> radius;
		//각 Circle객체를 반지름으로 초기화
		pArray[i].setRadius(radius);
	}

	int count = 0;
	Circle* p = pArray;

	for (int i = 0; i < n; i++) {
		double area = p->getArea();
		cout << "원" << i + 1 << "의 넓이 : " << area<< endl;

		if (area>= 100 && (area<= 400)) {
			count += 1;
		}
		p++;
	}
	cout << endl << count;

	delete[] pArray;
	return 0;
}