#include <iostream>
using namespace std;

class A {
public:
	int a;
	A(int input) {	//default �����ڰ� �ƴϸ� �ڽ�Ŭ�������� �Ű������� ���������Ѵ�.
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
class C: public B, virtual public A {	//��� ������� ������ ȣ��. virtual�� �ٴ´ٸ� ���� ȣ��ȴ�.
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