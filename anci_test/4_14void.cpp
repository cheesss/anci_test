#include <iostream>
using namespace std;

int main() {
	int a = 10;
	char c = 'A';

	int* iptr = &a;
	char* cptr = &c;

	void* gp;		//generic pointer
	gp = iptr;		//gp에 a의 주소를 저장

	cout << "a: " << a << endl;
	cout << "*iptr:" << *iptr << endl;
	cout << "*(int*) gp: " << *(int*)gp << endl;	//void형 포인터 변수도 출력할때는 형변환을 통해 형을 정해야한다

	gp = cptr;		//void형이기 때문에 다른 형의 변수도 저장가능
	cout << "c: " << c << endl;
	cout << "*cptr: " << *cptr << endl;
	cout << "*(char*) gp: " << *(char*)gp << endl;	//char 포인터는 변수의 첫자리부터 출력

}