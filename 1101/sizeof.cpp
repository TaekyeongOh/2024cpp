#include <iostream>
using namespace std;


int main() {
	cout << "int�� ũ��: " << sizeof(int) << " ����Ʈ" << endl;
	cout << "char�� ũ��: " << sizeof(char) << " ����Ʈ" << endl;
	cout << "bool�� ũ��: " << sizeof(bool) << " ����Ʈ" << endl;
	cout << "double�� ũ��: " << sizeof(double) << " ����Ʈ" << endl;

	int arr[10];
	cout << "arr�� ũ��: " << sizeof(arr) << " ����Ʈ" << endl;
}