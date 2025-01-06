#include <iostream>
using namespace std;
char& find(char s[], int index) {
	return s[index]; // 참조리턴
}
int main() {
	string name = "Mike"; //Site로 바꾸기
	//char name[] = "Mike";
	cout<<"원래 문자열 : " << name << endl;

	//find(name, 0) = 'S'; // name[0]='S'로변경
	//cout << name << endl;
	name.replace(name.find("Mike"),4, "Site");
	//char& ref = find(name, 2);
	//ref = 't'; // name = "Site"
	cout << name << endl;
}