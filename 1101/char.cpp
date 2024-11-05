#include <iostream>
using namespace std;

int main() {
	int i = '2' + '3';
	cout << "i is " << i << endl;

	int j = 2 + 'a';
	cout << "j is " << j << endl;
	cout << j << "is the ASCII code for character " << static_cast<char>(j) << endl;
}