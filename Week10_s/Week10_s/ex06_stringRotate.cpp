#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�.(�ѱ� �ȵ�) " << endl;
	getline(cin, s, '\n'); // ���ڿ� �Է�
	int len = s.length(); // ���ڿ��� ����

	for(int i=0; i<len; i++) {
		string first =           // �� ���� ���� 1���� ���ڿ��� �и�
		string sub =             // ������ ���ڵ��� ���ڿ��� �и�
		                        // �� ���ڿ��� �����Ͽ� ���ο� ���ڿ��� ����
		cout << s << endl;
	}
}
