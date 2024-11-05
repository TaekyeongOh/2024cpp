struct StructName {
private:
	//private 멤버 선언
protected:
	//protected 멤버 선언
public:
	//public 멤버 선언
};

structName stObj;
// C++ 구조체 객체 생성

// struct structName stObj;
// C 언어 구조체 객체 생성

struct Circle {
	Circle();
	Circle(int r);
	double getArea();
private:
	int radius;
};

// 아래 class 와 위의 struct는 동일

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};