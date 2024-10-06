#include <iostream>
#include <limits>
using namespace std;

int main()
{
	//정수의 한계값 찍어보기
	//C스타일 : SHRT_MAX, SHRT_MIN
	short num = SHRT_MAX + 1;
	cout << "short 최대값: " << num << endl;

	//C++ 스타일
	cout << "C++스타일: 최대/최소: " << numeric_limits<short>::max() << endl;
	cout << "C++스타일: 최대/최소: " << numeric_limits<short>::min() << endl;
}