#include <iostream>
using namespace std;
char& find(char s[], int index) {
	return s[index]; // ��������
}
int main() {
	string name = "Mike"; //Site�� �ٲٱ�
	//char name[] = "Mike";
	cout<<"���� ���ڿ� : " << name << endl;

	//find(name, 0) = 'S'; // name[0]='S'�κ���
	//cout << name << endl;
	name.replace(name.find("Mike"),4, "Site");
	//char& ref = find(name, 2);
	//ref = 't'; // name = "Site"
	cout << name << endl;
}