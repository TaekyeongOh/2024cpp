#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int larger;

	cout<<"���� �� ���� �Է��ϼ���."<<endl;
	cin >> a >> b;

	// ���׿�����1
	larger = (a > b) ? a : b;
	// ���׿�����2
	(a > b) ? larger = a : larger = b;
	
	cout << "�� ū ���� : " << larger;
}