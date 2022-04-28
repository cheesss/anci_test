#include <iostream>
using namespace std;

int sum(const int &a, const  int &b, const  int &c) {
	//래퍼런스 연산자가 붙었으므로 main함수 변수가 변화한다. 대신 실행 시간이 단축된다
	//해결법은 const를 붙이는거다->변수 바뀔 걱정 없고 실행 빠름

	int sum;
	sum = a + b + c;
	//b = 100;	//&가 없다면 원래는 복사본을 가지기 때문에 main함수의 변수 변화가 없다.
				//const를 붙이고 변수를 변화시키려하면 오류발생

	return sum;
}

int main() {
	int n1, n2, n3, result;
	n1 = 10;
	n2 = 20;
	n3 = 30;
	result = sum(n1, n2, n3);		//call by value
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "n3:" << n3 << endl;

	cout << "결과" << result << endl;
	return 0;
}