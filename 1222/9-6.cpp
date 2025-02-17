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
    cout << "생성하고자 하는 원의 개수? ";
    int n, radius;
    cin >> n; // 원의 개수 입력

    // 원의 개수를 0 이하로 입력하면, 프로그램 종료: if문
    if (n <= 0) {
        cout << "원 개수가 0 이하이므로 프로그램을 종료합니다." << endl;
        return 0;
    }

    // n 개의 Circle 배열 생성
    Circle* pArray = new Circle[n];

    for (int i = 0; i < n; i++) {
        // 프롬프트 출력
        cout << "원" << i + 1 << ": ";
        // 반지름 입력
        cin >> radius;
        // 각 Circle 객체를 반지름으로 초기화
        pArray[i].setRadius(radius);
    }

    int count = 0; // 카운트 변수
    Circle* p = pArray;

    // 원의 면적 출력과 조건문 작성(for, if문)
    for (int i = 0; i < n; i++) {
        double area = p->getArea();
        // 원의 면적 출력
        cout << area << " ";
        // if문
        if (area >= 100 && area <= 200) {
            count++;
        }
        p++;
    }

    cout << endl;
    cout << "면적이 100에서 200 사이인 원의 개수: " << count << endl;

    // 객체 배열 소멸
    delete[] pArray;

    return 0;
}
