#include <iostream>
using namespace std;

//a���� b���� ���ϱ�
int sum(int a, int b) {
	int sum = 0;
	for (int i = a; i < b + 1; i++) {
		sum += i;
	}
	return sum;
}

//0���� a���� ���ϱ�
int sum(int a) {
	int sum = 0;
	for (int i = 0; i < a; i++)
		sum += (i + 1);
	return sum;
}


int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}