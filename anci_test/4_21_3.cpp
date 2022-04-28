#include <iostream>
using namespace std;

int& max(int& a, int& b);		//return by reference 변수와 리턴 모두 레퍼런스로 해줘야함.

int main() {
	int n1, n2;
	n1 = 10;
	n2 = 20;

	int result = max(n1, n2);	//n2의 값을 복사해서 가지고 있을뿐이다.
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "결과" << result << endl;

	int& ref = max(n1, n2);	//int &ref==n2
	ref = 100;	//ref는 max함수 반환형을 받았는데, 이 레퍼런스는 n2를 가리키고 있기 때문에 n2가 100으로 바뀐다.
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "결과" << result << endl;
	cout << "ref:" << ref << endl;

	max(n1, n2) = -1;	//return by ref는 함수를 변수처럼 사용할 수 있다.
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "결과" << result << endl;
	cout << "ref:" << ref << endl;

	return 0;
}

int& max(int &a, int &b) {
	if (a > b)
		return a;
	else
		return b;
}