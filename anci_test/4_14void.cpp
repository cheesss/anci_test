#include <iostream>
using namespace std;

int main() {
	int a = 10;
	char c = 'A';

	int* iptr = &a;
	char* cptr = &c;

	void* gp;		//generic pointer
	gp = iptr;		//gp�� a�� �ּҸ� ����

	cout << "a: " << a << endl;
	cout << "*iptr:" << *iptr << endl;
	cout << "*(int*) gp: " << *(int*)gp << endl;	//void�� ������ ������ ����Ҷ��� ����ȯ�� ���� ���� ���ؾ��Ѵ�

	gp = cptr;		//void���̱� ������ �ٸ� ���� ������ ���尡��
	cout << "c: " << c << endl;
	cout << "*cptr: " << *cptr << endl;
	cout << "*(char*) gp: " << *(char*)gp << endl;	//char �����ʹ� ������ ù�ڸ����� ���

}