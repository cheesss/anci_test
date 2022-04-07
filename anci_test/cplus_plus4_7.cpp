#include <iostream>

//C++부터는 반환형 void 부적합, 안써져있다면 int로 할당
int main() {
	int id;
	char name[20];

	std::cout << "학번을 입력하시오:";
	std::cin >> id;

	//name space 설정
	std::cout << "info of me\n";
	std::cout << "ID:" << id << std::endl;
	std::cout << "Name:" << name << std::endl;
	//stdendl = \n

	return 0;		//생략해도 문제없음
}