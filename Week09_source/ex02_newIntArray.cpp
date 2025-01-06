#include <iostream>
using namespace std;

int main() {
    cout << "입력할 정수의 개수는? ";
    int n;
    cin >> n; // 정수의 개수 입력
    if (n <= 0) return 0;

    // n개의 정수배열 동적할당
    int* p = new int[n];
    if (!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    //사용자로부터 정수 입력받아 배열에 저장: for문
    for (int i = 0; i < n; i++) {
        // 프롬프트 출력
        cout << i + 1<<"번째 정수 " << ": ";
        // 키보드로부터 정수 입력
        cin >> p[i]; 
    }

    // 포인터로 배열에 접근하여 합을 구하고, 출력하기
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
    }

    cout << "합 = " << sum << endl;

    // 배열 메모리 반환
    delete[] p;

    return 0;
}
