#include <iostream>
using namespace std;

int main() {
	cout << "입력할 정수 개수 :";
	int n;
	cin >> n;
	if (n <= 0) { return 0; }

	//n개의 정수 배열 동적 할당
	int* p = new int[n];
	if (!p) {
		cout << "메모리 할당 불가";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		//프롬프트 출력
		cout << i + 1 << "번째 정수 : ";
		//키보드로부터 정수 입력
		cin >> p[i];
	}

	//포인터로 배열에 접근해 합 구하고 출력하기
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "합 = " << sum << endl;
	//배열 메모리 반환
	delete[] p;
	return 0;
}