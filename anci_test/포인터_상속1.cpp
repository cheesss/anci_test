#include <iostream>
using namespace std;

class A {
public:
	int adata;
	void adisplay() {
		cout << adata << endl;
	}
};

class B :public A{
public:
	int bdata;
	void bdisplay() {
		cout << bdata << endl;
	}
};

int main() {
	A a;
	A* aptr = &a;
	

	B b;
	aptr = &b;

	aptr->adata = 100;
	aptr->adisplay();

	((B*)aptr)->bdata = 200;		//b클래스로 타입 컨버젼을 해주지 않으면 상속해준 a의 멤버들만 사용가능하다.
//	aptr->bdisplay(); 얘도 오류 발생
	((B*)aptr)->bdisplay();
}