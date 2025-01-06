#include <iostream>
using namespace std;

int main() {
	int a,b,i,sum=0;

	cout << "정수 두 개 입력 :" << endl;
	cin >> a >> b;
	
	for (int i=a; i<=b; i++) {
		sum += i;
	}
	cout << "합 : "<< sum;
}