#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "문자열을 입력하세요.(한글 안됨) : " << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1); // 문자열의 첫 문자(인덱스 0~1개 문자 추출)
		string sub = s.substr(1, len - 1); // 첫 문자 제외한 나머지 문자열 추출
		s = sub + first;
		cout << s << endl;
	}
}