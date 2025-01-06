#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cout << "여러줄 문자 입력. 입력 끝 : &" << endl;
	getline(cin, s, '&');
	cin.ignore(); //enter무시

	//찾을 문자, 대체할 문자 찾기
	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace : ";
	getline(cin, r, '\n');

	int startIndex = 0; //교체 후 검색을 계속할 위치 추적 변수
	while (true) {
		int findex = s.find(f, startIndex);
		if (findex == -1)
			break;
		s.replace(findex, f.length(), r);//찾은 단어 바꿀 단어로 대체
		startIndex = findex + r.length();//교체 위치 이후 다시 찾기
	}
	cout << s << endl;
}