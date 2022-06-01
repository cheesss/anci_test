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
	//	P1.p1 = 100;  프로텍티드 이므로 오류발생! Child 클래스의 상속 접근 지정자가 public 이더라도 p1은 접근 불가
	//	T1.showP1();	child 에서 private으로 상속 받았으므로 사용 불가
	Child c1;
	//	c1.setG1(1);	child 입장에선 parent1 과 parent2 중 어디에서 상속받은 grandparent를 사용해야할지 몰라 오류가 발생한다!
		//virtual을 이용하여 grandparent를 상속받으면 오류가 발생하지 않는다. 뿌리를 하나로 묶어준 느낌
	c1.setP1(10);
	c1.setP2(20);
	c1.setC1(100);
	//	c1.showG1();
	c1.showP1();
	c1.showP2();
	c1.showC1();
}