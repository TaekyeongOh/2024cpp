/*#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	/*for (int i = 1; i < 11; i++) {
	// ���� �ݺ� ���� for (int i = 1; ; i++) {
		sum += i;
		i++;
	}*/

	/*for (; ;) {
		sum += i;
		
		if(i>10
			break;
	}
	cout << "1~10������ ��: " << sum << endl;
}*/

#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int i = 1;  // ���� i ���� �� �ʱ�ȭ

	for (;;) {  // ���� ����
		sum += i;

		if (i > 10)  // ���� üũ �� ���� ����
			break;

		i++;  // i ����
	}

	cout << "1~10������ ��: " << sum << endl;

	return 0;

	//while��
	int i = 1;
	int sum = 0;
	while (i < 11)
	{
		sum += i;
		i++;
		cout << "1~10������ ��: " << sum << endl;
	}
}
