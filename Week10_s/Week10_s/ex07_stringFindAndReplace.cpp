#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&'); // 문자열 입력
	cin.ignore(); // '&' 뒤에 따라 오는 <Enter> 키를 제거하기 위한 코드!!!
	
	string f, r;
	cout << endl << "find: ";
	// 검색할 문자열 입력
	
	cout << "replace: ";
	// 대치할 문자열 입력

	int startIndex = 0;
	while(true) {
		int fIndex = // startIndex부터 문자열 f 검색
		if(fIndex == -1)
			break; // 문자열 s의 끝까지 변경하였음
		// fIndex부터 문자열 f의 길이만큼 문자열 r로 변경
		
		startIndex = //다시 검색할 시작위치 설정
	}
	cout << s << endl;
}