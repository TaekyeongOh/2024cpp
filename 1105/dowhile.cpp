#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;

	cout << "두 개의 정수 입력 : " << endl;
	cin >> a >> b;
	i = a;
	
	do {
		sum += i;
		i++;
	} while (i <= b);

	cout << "총 합 : " << sum;
}