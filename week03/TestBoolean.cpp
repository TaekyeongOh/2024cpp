#include <iostream>
using namespace std;

int num;

int main() {
	cout << "숫자를 입력하세요. ";
	cin >> num;

	bool isEvenNum = (num % 2 == 0);

	cout << (isEvenNum ? "짝수입니다." : "홀수입니다.") << endl;

}