#include <iostream>
using namespace std;

int year;

int main() {
	cout << "³âµµ 4ÀÚ¸´¼ö ÀÔ·ÂÇÏ¼¼¿ä.";
	cin >> year;

	bool isLeapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

	// if else Çü½Ä

	/*
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		cout<<"À±³âÀÔ´Ï´Ù.";
	}
	else {
		cout<<"À±³âÀÌ ¾Æ´Õ´Ï´Ù.";
	}
	*/


	// »ïÇ×¿¬»êÀÚ Çü½Ä

	cout << year << "Àº " << ((isLeapYear) ? "À±³âÀÔ´Ï´Ù." : "À±³âÀÌ ¾Æ´Õ´Ï´Ù.") << endl;
}