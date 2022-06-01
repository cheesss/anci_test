#include <iostream>
using namespace std;

class Grandparent {		//abstract class 완전하지 못한 클래스, 객체 생성 불가.
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
	//overrideing! child 객체를 만들 수 있도록 해준다.
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
	//	Grandparent objG; 오류발생
	//	Parent1 P1; 이것도 오류발생, grandparent가 불완전하기 때문에.

	//만약 child 클래스에서만 overriding 해주었다면 child 객체만 만들 수 있다.
	//상위 부모 class에서 override 해주었다면, 그 밑의 상속 받은 자식 class에선 override 하지 않아도 객체 생성 가능하다.
	Child C1;
	C1.Grandparent::setValue(10);	//그냥 setValue를 쓰면 child 클래스 내부 함수 호출
	C1.printValue();	//나머지 c1과p1은 쓰레기 값이 출력된다.
}