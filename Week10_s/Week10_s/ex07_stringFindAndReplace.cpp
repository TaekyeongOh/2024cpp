#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&'); // ���ڿ� �Է�
	cin.ignore(); // '&' �ڿ� ���� ���� <Enter> Ű�� �����ϱ� ���� �ڵ�!!!
	
	string f, r;
	cout << endl << "find: ";
	// �˻��� ���ڿ� �Է�
	
	cout << "replace: ";
	// ��ġ�� ���ڿ� �Է�

	int startIndex = 0;
	while(true) {
		int fIndex = // startIndex���� ���ڿ� f �˻�
		if(fIndex == -1)
			break; // ���ڿ� s�� ������ �����Ͽ���
		// fIndex���� ���ڿ� f�� ���̸�ŭ ���ڿ� r�� ����
		
		startIndex = //�ٽ� �˻��� ������ġ ����
	}
	cout << s << endl;
}