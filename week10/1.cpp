#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// ������ ��� 
	/*
	char name[6] = { 'a','b','c','d','e','\0' };
	char name[0] = 'a';
	name[6] = '\0';
	*/
	char name[] = "abcdef";
	cout << strlen(name)<<endl;
	cout << "�̸� : "<<name;

	const char* pc = "hello";
	cout <<endl<< *pc;
	//const�� ���� �Ұ����ϹǷ� ���� �߻� *pc = 'H';

	char u_name[11];
	cout << "�̸� �Է� : ";
	cin >> u_name;
	cout << " �̸� ��� : " << u_name;
	cout << size(u_name);
}