#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "정수 입력하세요. ";
	cin >> num;

	bool isabs = (num >= 0);

	if (isabs) {
		cout << "절댓값 : " << num;
	}
	else {
		cout << "절댓값 : " << (-num);
	}
}