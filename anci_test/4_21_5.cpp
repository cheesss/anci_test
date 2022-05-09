#include <iostream>
using namespace std;

int sum(int a, int b, int c) {	//c가 default됨	1번
	return(a + b + c);
}

int sum(int a, int b) {		//2번
	return(a + b);
}

/*
float sum(int a, int b) {
	return(a + b);
}					//반환형식으로는 오버로드 구별불가
*/

double sum(double a, double b) {		//3번
	return(a + b);
}

int main() {
	int result;
	result = sum(10, 20, 30);	//1번 호출
	cout << "결과" << result << endl<< endl;


	result = sum(10, 20);		//2번 호출
	cout << "결과" << result << endl;

	result = sum(10.1, 20.3);		//3번 호출
	cout << "결과" << result << endl;

	//전해주는 값의 자료형이 받는 매개변수보다 범위가 작고, 다른 함수와 겹치지 않아야한다.
	return 0;
}