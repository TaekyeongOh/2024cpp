#include <iostream>
using namespace std;

// 포인터를 사용하여 두 정수를 비교하는 함수
bool equal(int* a, int* b);

int main() {
    int x = 5;
    int y = 2;

    // 포인터를 전달하여 함수 호출
    if (equal(&x, &y)) { // &x, &y는 x와 y의 주소를 전달
        cout << "equal" << endl;
    }
    else {
        cout << "not equal" << endl;
    }

    return 0;
}

// 포인터를 사용하여 두 정수의 값을 비교하는 함수
bool equal(int* a, int* b) {
    if (*a == *b) { // 포인터를 역참조하여 값 비교
        return true;
    }
    else {
        return false;
    }
}
