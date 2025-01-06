#include <iostream>
using namespace std;

int main() {
    // 주소 입력
    cout << "주소를 입력하세요: ";
    char address[100];
    cin.getline(address, 100, '\n');
    cout << "주소는 " << address << "입니다.\n\n";

    // 이름 입력 (5개)
    char name[5][11]; // 각 이름은 최대 10자
    for (int i = 0; i < 5; i++) {
        cout << "이름 입력 (" << i + 1 << "): ";
        cin.getline(name[i], 11);
    }

    // 이름 출력
    cout << "\n입력된 이름:\n";
    for (int i = 0; i < 5; i++) {
        cout << "- " << name[i] << endl; // 각 이름 출력 후 줄바꿈
    }

    return 0;
}
