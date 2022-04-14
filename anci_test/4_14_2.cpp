#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 100;

	//int* const iptr = &a;		//constant pointer 주소값 변수를 상수화 한다->주소값을 바꿀 수 없게한다.

	const int* iptr = &a;		//pointer to constant	*기준으로 앞에 const가 쓰이면 iptr이 가리키는 변수를 상수화한다->a를 상수화, 주소값은 바꿀 수 있다.
								//*iptr = 값 이 코드를 입력하면 오류 발생

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "*iptr " << *iptr << endl;

	//iptr = &b;	//상수화 된 주소값 변수 iptr를 바꾸려하였으므로 오류발생
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "*iptr " << *iptr << endl;

}