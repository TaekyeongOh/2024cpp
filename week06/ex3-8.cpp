#include <iostream>
using namespace std;

// 클래스 선언
class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
}
Circle::~Circle() {
    cout << "반지름" << radius << "원 소멸" << endl;
}
// 클래스의 구현부
double Circle::getArea() {
    return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
    Circle fDonut(100);
    Circle fPizza(200);
}

int main() {
    Circle mainDonut;
    Circle mainPizza(30);
    f();
}