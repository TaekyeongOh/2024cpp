#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int larger;

	cout<<"숫자 두 개를 입력하세요."<<endl;
	cin >> a >> b;

	// 삼항연산자1
	larger = (a > b) ? a : b;
	// 삼항연산자2
	(a > b) ? larger = a : larger = b;
	
	cout << "더 큰 숫자 : " << larger;
}