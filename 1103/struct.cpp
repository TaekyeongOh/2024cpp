struct StructName {
private:
	//private ��� ����
protected:
	//protected ��� ����
public:
	//public ��� ����
};

structName stObj;
// C++ ����ü ��ü ����

// struct structName stObj;
// C ��� ����ü ��ü ����

struct Circle {
	Circle();
	Circle(int r);
	double getArea();
private:
	int radius;
};

// �Ʒ� class �� ���� struct�� ����

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};