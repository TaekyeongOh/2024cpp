#include <iostream>
#include <string>
using namespace std;

int main() {
	//��Ʈ�� ����
	string str;
	string address("����� ���ϱ� �Ｑ��");
	string copyAddress(address);

	char text[] = { 'L','o','v','e',' ', '+', '+','\0' };
	string title(text);
	
	//��Ʈ�� ���
	cout << str << endl; //�� ��Ʈ�� �ƹ� �͵� ��µ��� ����
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}