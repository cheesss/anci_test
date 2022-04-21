#include <iostream>
using namespace std;

void printline();
int fact(int);

int main() {
	int a;
	printline();
	cout << "숫자입력";
	cin >> a;
	cout << "fact(" << a << "):" << fact(a) << endl;
}

void printline() {
	for (int i = 0; i < 10; i++) {
		cout << "-";
	}
	cout << endl;
}

int fact(int n) {
	if (n == 1)
		return 1;
	else{
		return (n * fact(n - 1));
	}
}			//재귀호출 함수는 inline 설정 불가, 컴파일러에서 판단 후 설정, 오류가 나지는 않는다.

