#include <iostream>
#include <limits>
using namespace std;

int main()
{
	//������ �Ѱ谪 ����
	//C��Ÿ�� : SHRT_MAX, SHRT_MIN
	short num = SHRT_MAX + 1;
	cout << "short �ִ밪: " << num << endl;

	//C++ ��Ÿ��
	cout << "C++��Ÿ��: �ִ�/�ּ�: " << numeric_limits<short>::max() << endl;
	cout << "C++��Ÿ��: �ִ�/�ּ�: " << numeric_limits<short>::min() << endl;
}