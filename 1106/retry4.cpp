#include <iostream>
using namespace std;

struct StructC {
private:
	int radius;
public:
	StructC(int r) { radius = r; }
	double getArea();
};

double StructC::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	StructC waffle(3);
	cout << "¸éÀûÀº " << waffle.getArea();
}