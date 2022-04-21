#include <iostream>		//신기하다!
using namespace std;	//오늘 채린이 만난다~

char& sstring(char input[], int index) {
	return (input[index]);
}

int  main() {
	char name[] = "cho";
	cout << "이름:" << name << endl;
	sstring(name, 2)= 'O';	//이름 문자열의 3번째를 레퍼런스로 받고 변형시킨다

	cout << "이름:" << name << endl;

	char& ref = sstring(name, 0);	//반드시 필요
	ref = 'C';	//""를 쓰면 오류발생, 문장이 아니라 char 값이기 때문
	cout << "이름:" << name << endl;

	return 0;
}