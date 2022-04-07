#include <iostream>

//using std::cout;	//이 아래부터는 cout을 사용할때 name_space를 설정하지 않아도 된다
//using std::cin;
using namespace std;	//명령어를 하났끽 using으로 선언하지 않아도 된다

//C++부터는 반환형 void 부적합, 안써져있다면 int로 할당
int main() {
	int id;
	char name[20];

	cout << "학번을 입력하시오:";
	cin >> id;
	cout << "이름을 입력하시오:";
	cin >> name;


	//name space 설정
	cout << "info of me\n";
	cout << "ID:" << id << std::endl;
	cout << "Name:" << name << std::endl;
	//stdendl = \n

	return 0;		//생략해도 문제없음
}