#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Person { // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	~Person(); // 소멸자
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(const Person& p) {
	this->id = p.id;
	this->name = p.name;
}
Person::Person(int id, const char* name) { // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 핟당
	strcpy(this->name, name); // name에 문자열 복사
}
Person::~Person() {// 소멸자
	if (name) // 만일 name에 동적 할당된 배열이 있으면
		delete[] name; // 동적 할당 메모리 소멸
}
void Person::changeName(const char* name) { // 이름 변경
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}
