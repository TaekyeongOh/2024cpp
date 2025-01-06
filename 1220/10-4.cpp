#include <iostream>
#include <string>
using namespace std;

int main() {
	//스트링 생성
	string str;
	string address("서울시 성북구 삼선동");
	string copyAddress(address);

	char text[] = { 'L','o','v','e',' ', '+', '+','\0' };
	string title(text);
	
	//스트링 출력
	cout << str << endl; //빈 스트링 아무 것도 출력되지 않음
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}