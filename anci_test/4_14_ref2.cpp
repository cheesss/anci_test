#include <iostream>
using namespace std;

void swap(int, int);
void pswap(int*, int*);
void rswap(int&, int&);


int main() {
	int num1 = 100;
	int num2 = 200;
	
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	//swap(num1, num2);
	//cout << "스왑 이후, 원본은 그대로" << endl;

	rswap(num1, num2);
	cout << " 레퍼런스 스왑 이후, 원본이 변한다" << endl;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;


}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	//일반 변수는 스왑을 해주어도 내부에서만 발생하고, main함수에 전달해주지 못하기 떄문
}

void pswap(int* a, int* b) {	//call by address
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

void rswap(int& a, int& b) {	//call by ref 이는 함수의 매개변수에서 참조자가 정해지므로, 그냥 변수 자체를 넘겨주면 된다
	int temp = a;
	a = b;
	b = temp;
	//레퍼런스 변수를 스왑해주면, 레퍼런스 변수가 가리키는 값이 변하는것이므로, 스왑이 발생한다.
}