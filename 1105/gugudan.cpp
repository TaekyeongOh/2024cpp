#include <iostream>
using namespace std;

int main() {
	int a, b;
	
	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= 9; b++) {
			cout << a << " X " << b <<" = "<< a * b << endl;
		}
		cout<<endl;
	}
}