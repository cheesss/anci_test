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

	((B*)aptr)->bdata = 200;		//bŬ������ Ÿ�� �������� ������ ������ ������� a�� ����鸸 ��밡���ϴ�.
//	aptr->bdisplay(); �굵 ���� �߻�
	((B*)aptr)->bdisplay();
}