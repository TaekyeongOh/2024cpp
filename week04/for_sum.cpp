/*#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	/*for (int i = 1; i < 11; i++) {
	// 무한 반복 루프 for (int i = 1; ; i++) {
		sum += i;
		i++;
	}*/

	/*for (; ;) {
		sum += i;
		
		if(i>10
			break;
	}
	cout << "1~10까지의 합: " << sum << endl;
}*/

#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int i = 1;  // 변수 i 선언 및 초기화

	for (;;) {  // 무한 루프
		sum += i;

		if (i > 10)  // 조건 체크 후 루프 종료
			break;

		i++;  // i 증가
	}

	cout << "1~10까지의 합: " << sum << endl;

	return 0;

	//while문
	int i = 1;
	int sum = 0;
	while (i < 11)
	{
		sum += i;
		i++;
		cout << "1~10까지의 합: " << sum << endl;
	}
}
