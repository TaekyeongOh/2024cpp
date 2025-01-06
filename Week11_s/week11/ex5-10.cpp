#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Person { // Person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	~Person(); // �Ҹ���
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(const Person& p) {
	this->id = p.id;
	this->name = p.name;
}
Person::Person(int id, const char* name) { // ������
	this->id = id;
	int len = strlen(name); // name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� ����
	strcpy(this->name, name); // name�� ���ڿ� ����
}
Person::~Person() {// �Ҹ���
	if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name; // ���� �Ҵ� �޸� �Ҹ�
}
void Person::changeName(const char* name) { // �̸� ����
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}
