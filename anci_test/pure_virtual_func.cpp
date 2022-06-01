#include <iostream>
using namespace std;

class Grandparent {
protected:
	int g1;
public:
	void setG1(int input) {
		g1 = input;
	}
	void showG1() {
		cout << g1 << endl;
	}
};

class Parent1 : public virtual Grandparent {
protected:
	int p1;
public:
	void setP1(int input) {
		p1 = input;
	}
	void showP1() {
		cout << p1 << endl;
	}
};

class Parent2 : public virtual Grandparent {
protected:
	int p2;
public:
	void setP2(int input) {
		p2 = input;
	}
	void showP2() {
		cout << p2 << endl;
	}
};

class Child : public Parent1, public Parent2 {
	int c1;
public:
	void setC1(int input) {
		c1 = input;
	}
	void showC1() {
		cout << c1 << endl;
	}
};
class Test : public Child {

};
int main() {
	//	P1.p1 = 100;  ������Ƽ�� �̹Ƿ� �����߻�! Child Ŭ������ ��� ���� �����ڰ� public �̴��� p1�� ���� �Ұ�
	//	T1.showP1();	child ���� private���� ��� �޾����Ƿ� ��� �Ұ�
	Child c1;
	//	c1.setG1(1);	child ���忡�� parent1 �� parent2 �� ��𿡼� ��ӹ��� grandparent�� ����ؾ����� ���� ������ �߻��Ѵ�!
		//virtual�� �̿��Ͽ� grandparent�� ��ӹ����� ������ �߻����� �ʴ´�. �Ѹ��� �ϳ��� ������ ����
	c1.setP1(10);
	c1.setP2(20);
	c1.setC1(100);
	//	c1.showG1();
	c1.showP1();
	c1.showP2();
	c1.showC1();
}