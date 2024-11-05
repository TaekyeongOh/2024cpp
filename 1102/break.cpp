#include <iostream>
using namespace std;

int main() {
	int a = 1 , sum = 0;

	while (true) {
		sum += a;
		if (sum >= 20) {
			break;
		}
		a++;
	}

	cout << "합이 20 이상이 되는 순간의 값: " << sum << endl;
}