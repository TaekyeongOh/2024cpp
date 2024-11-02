#include <iostream>
using namespace std;

int main() {
	int n = 10, m;
	char c = 'A';
	double d;

	//p는 n의 주소값을 가짐
	int* p = &n;
	//q는 c의 주소값을 가짐
	char* q = &c;
	//r는 d의 주소값을 가짐
	double* r = &d;
	//n에 25가 저장됨
	*p = 25;
	//c에 문자 'A'가 저장됨
	*q = 'A';
	//d에 3.14가 저장됨
	*r = 3.14;
	//p가 가리키는 값(n 변수값)+10을 m에 저장
	m = *p + 10;

	cout << n << ' ' << *p << "\n"; // 둘 다 25 출력됨
	cout << c << ' ' << *q << "\n"; // 둘 다 'A'출력됨
	cout << d << ' ' << *r << "\n"; // 둘 다 3.14가 출력됨
	cout << m <<"\n"; // m값 35 출력됨

}