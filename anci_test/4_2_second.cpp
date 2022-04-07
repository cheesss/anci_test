#include <iostream>

using namespace std;

//나만의 namespace 만들기
namespace ns1 {
	int data;
	void print() {
		cout << "data in ns1" << data << endl;
	}
}

namespace ns2 {
	int data;
	void print() {
		cout << "data in ns2: " << data << endl;
	}
}

int main() {
	int data;
	data = 100;	//local variable in main func
	ns1::data = 200;	//var in namespace ns1
	ns2::data = 300;	//var in namespace ns2
	cout << "data in main: " << data << endl;
	cout << "data in ns1: " << ns1::data << endl;
	cout << "data in ns2: " << ns2::data << endl;
	
	ns1::print();		//내가 정의한 ns1 속 함수를 사용한다
	return 0;
}