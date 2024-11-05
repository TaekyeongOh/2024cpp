#include <iostream>
using namespace std;


int main() {
	cout << "int의 크기: " << sizeof(int) << " 바이트" << endl;
	cout << "char의 크기: " << sizeof(char) << " 바이트" << endl;
	cout << "bool의 크기: " << sizeof(bool) << " 바이트" << endl;
	cout << "double의 크기: " << sizeof(double) << " 바이트" << endl;

	int arr[10];
	cout << "arr의 크기: " << sizeof(arr) << " 바이트" << endl;
}