#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// 무식한 방법 
	/*
	char name[6] = { 'a','b','c','d','e','\0' };
	char name[0] = 'a';
	name[6] = '\0';
	*/
	char name[] = "abcdef";
	cout << strlen(name)<<endl;
	cout << "이름 : "<<name;

	const char* pc = "hello";
	cout <<endl<< *pc;
	//const는 변경 불가능하므로 오류 발생 *pc = 'H';

	char u_name[11];
	cout << "이름 입력 : ";
	cin >> u_name;
	cout << " 이름 출력 : " << u_name;
	cout << size(u_name);
}