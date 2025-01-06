#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n;
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn; //p는 n의 주소를 가짐
	*p = 20; //refn=20,n=20
	cout << i << '\t' << n << '\t' << refn << endl;

}