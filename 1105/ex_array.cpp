#include <iostream>
using namespace std;

int main() {
	int a;
	int array[5];
	do {
		cout << "크기를 입력하세요(1~10) : " << endl;
		cin >> a;
	} while ((a < 1) || (a > 10));

	cout << a<<"개의 숫자를 입력하세요 : ";
	for (int i = 0; i < a; i++) {
		cin >> array[i];
	}

	cout << "입력한 숫자들을 거꾸로 출력 : ";
	for (int i = a-1; i >= 0; i--) {
		cout << array[i]<<' ';
	}
	
}