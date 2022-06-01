#include <iostream>
using namespace std;

class A {
public:
	int a;
	A(int input) {	//default 생성자가 아니면 자식클래스에서 매개변수를 명시해줘야한다.
		a = input;
		cout << "constructor A" << endl;
	}
	~A() {
		cout << "destructor A" << endl;
	}
};
class B {
public:
	int b;
	B(int input){
		b = input;
		cout << "constructor B" << endl;
	}
	~B() {
		cout << "destructor B" << endl;
	}
};
class C: public B, virtual public A {	//상속 순서대로 생성자 호출. virtual이 붙는다면 먼저 호출된다.
public:
	int c;
	C(int input, int inputa, int inputb): B(inputb), A(inputa) {
		c = input;
		cout << "constructor C" << endl;
	}
	~C() {
		cout << "destructor C" << endl;
	}
	void showvalue() {
		cout << a << b << c << endl;
	}
};
int main() {
	C objc(10, 100, 1);
	objc.showvalue();
}