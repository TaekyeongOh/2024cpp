#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cout << "������ ���� �Է�. �Է� �� : &" << endl;
	getline(cin, s, '&');
	cin.ignore(); //enter����

	//ã�� ����, ��ü�� ���� ã��
	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace : ";
	getline(cin, r, '\n');

	int startIndex = 0; //��ü �� �˻��� ����� ��ġ ���� ����
	while (true) {
		int findex = s.find(f, startIndex);
		if (findex == -1)
			break;
		s.replace(findex, f.length(), r);//ã�� �ܾ� �ٲ� �ܾ�� ��ü
		startIndex = findex + r.length();//��ü ��ġ ���� �ٽ� ã��
	}
	cout << s << endl;
}