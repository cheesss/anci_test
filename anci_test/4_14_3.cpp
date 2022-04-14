#include <iostream>
using namespace std;

int main() {
	const int size = 4;		//const변수는 초기화와 선언을 동시에해줘야한다.

	//int size = 4;	배열의 사이즈 값은 상수만 가능, 이 코드는 오류를 발생시킨다

	//const int size = 100;
	//size = 200; 상수화된 변수에 값을 바꾸려하므로 오류발생

	int arr[size] = { 0 };
	for (int i = 0; i < size; i++)
		cout << arr[i] << endl;
}