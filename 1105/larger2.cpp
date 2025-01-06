#include <iostream>
using namespace std;

int main() {
	int a, b,larger;
	cout << "두 수 입력 :" << endl;
	cin >> a >> b;
	larger = (a > b) ? a : b;

	cout << a << "와 " << b << "중에서 더 큰 수 : " << larger;
}