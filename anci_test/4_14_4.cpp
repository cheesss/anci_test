#include <iostream>
using namespace std;


//refrence var
int main() {
	int num = 100;
	int* ptr = &num;
	int& rnum = num;	//int 타입의 레퍼런스 변수	num 변수를 rnum으로도 사용할 수 있게해준다.

	cout << "num: " << num << endl;
	cout << "*ptr:" << *ptr << endl;
	cout << "rnum: " << rnum << endl;
	
	int num2 = 2000;
	rnum = num2;	//다른변수의 레퍼런스로도 사용가능
	cout << "2nd rnum:" << rnum << endl;
}