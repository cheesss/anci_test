#include <iostream>
using namespace std;

class sample {
	int data;	//private
public:
	char c;
	int pdata;
private:
	char ch;

};

int main() {
	sample s1;		//sample 타입의 객체 생성
	sample s2;

	//s1.data = 10;		private 변수이기때문에 닷 오퍼레이터로 접근불가

	s1.c = 'A';

	return 0;
}