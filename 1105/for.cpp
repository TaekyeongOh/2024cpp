#include <iostream>
using namespace std;

int main() {
	int a,b,i,sum=0;

	cout << "���� �� �� �Է� :" << endl;
	cin >> a >> b;
	
	for (int i=a; i<=b; i++) {
		sum += i;
	}
	cout << "�� : "<< sum;
}