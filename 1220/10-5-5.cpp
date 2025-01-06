#include <iostream>
using namespace std;

int average(int a[], int size) {
	if (size <= 0)
		return 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	return sum/size;
}

int main() {
	int x[] = { 0,1,2,3,4,5 };
	int avg = average(x, 6);
	cout << "ЦђБе : " << avg << endl;
}