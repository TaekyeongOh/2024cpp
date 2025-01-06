#include <iostream>
using namespace std;

int larger(int a, int b) {
	int n;
	if (a > b) {
		n = a;
		return n;
	}
	else if (a==b){
		n = b;
		return n;
	}
	else {
		n = b;
		return n;
	}
}

int main() {
	int a, b,n;
	cout << "두 수 입력 :" << endl;
	cin >> a >> b;

	cout << a << "와 " << b << "중에서 더 큰 수 : " << larger(a, b);
}