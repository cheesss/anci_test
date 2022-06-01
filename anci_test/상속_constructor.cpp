#include <iostream>
using namespace std;

class Grandparent {		//abstract class �������� ���� Ŭ����, ��ü ���� �Ұ�.
protected:
	int g1;
public:
	void setValue(int input) {
		g1 = input;
	}
	virtual void showvalue() = 0;	//pure virtual func
};

class Parent1 : public virtual Grandparent {
protected:
	int p1;
public:
	void setValue(int input) {
		p1 = input;
	}
	virtual void showvalue() {
		cout << p1 << endl;
	}

};

class Parent2 : public virtual Grandparent {
protected:
	int p2;
public:
	void setValue(int input) {
		p2 = input;
	}
	void showP2() {
		cout << p2 << endl;
	}
};

class Child : public Parent1, public Parent2 {
	int c1;
public:
	void setValue(int input) {
		c1 = input;
	}
	//overrideing! child ��ü�� ���� �� �ֵ��� ���ش�.
	/*virtual void showvalue() {
		cout << c1 << endl;
	}*/
	void printValue() {
		cout << "c1:" << c1 << endl;
		cout << "p1:" << p1 << endl;
		cout << "g1:" << g1 << endl;
	}
};
class Test : public Child {

};
int main() {
	//	Grandparent objG; �����߻�
	//	Parent1 P1; �̰͵� �����߻�, grandparent�� �ҿ����ϱ� ������.

	//���� child Ŭ���������� overriding ���־��ٸ� child ��ü�� ���� �� �ִ�.
	//���� �θ� class���� override ���־��ٸ�, �� ���� ��� ���� �ڽ� class���� override ���� �ʾƵ� ��ü ���� �����ϴ�.
	Child C1;
	C1.Grandparent::setValue(10);	//�׳� setValue�� ���� child Ŭ���� ���� �Լ� ȣ��
	C1.printValue();	//������ c1��p1�� ������ ���� ��µȴ�.
}