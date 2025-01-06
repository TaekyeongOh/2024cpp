#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5];  // 문자열배열선언

	for (int i = 0; i < 5; i++) {
		cout << "이름>> ";
		getline(cin, names[i], '\n');

	}

	string latter = names[0];


	for (int i = 1; i < 5; i++) {
		if (latter < names[i]) { // 사전순으로latter 문자열이앞에온다면
			latter = names[i];   // latter 문자열변경
		}
	}
	cout << "사전에서가장뒤에나오는문자열은" << latter << endl;
}