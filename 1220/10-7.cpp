#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의끝은&문자입니다." << endl;
	getline(cin, s, '&'); // 문자열 입력, 끝문자는 &이다.
	cin.ignore(); // 첫 번째 getline 후에 남아있는 입력 버퍼 지움.
	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n'); // 검색할 문자열 입력
	cout << "replace: ";
	getline(cin, r, '\n'); // 대치할 문자열 입력
	
	int startIndex = 0; // 문자열 검색을 처음부터 시작할 수 있도록 함
	while (true) {
		int fIndex = s.find(f, startIndex); // startIndex부터 문자열 f 검색
		// s.find(f,startIndex) : s에서 startIndex부터 시작해 문자열 f찾음
		if (fIndex == -1)
			break; // 문자열 s의 끝까지 변경하였음
		s.replace(fIndex, f.length(), r); // fIndex부터 문자열 f의 길이만큼 문자열 r로 변경
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}
