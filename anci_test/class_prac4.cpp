#include <iostream>
using namespace std;

class item {
	int number;
	static int count;		//정적 멤버변수

public:
	void setdata(int a) {
		number = a;
		count++;
	}
	int getdata() {
		return number;
	}
	void printdata() {
		cout << "넘버 값:" << number << endl;
		cout << "카운트 값:" << count << endl;
	}

	static void setcount(int a) {
		count = a;
	}

	static void printcount() {	//클래스에서 객체 없이도 호출가능한 함수
		cout << "카운트:" << count << endl;
		//cout << "넘버:" << number << endl;		//비정적 멤버 변수는 반드시 객체를 통해 호출해야하므로 오류발생!
	}	//static 함수는 static var만 사용해야한다
};

int item::count;		//자동으로 0으로 초기화

int main() {
	item a, b, c;
	a.setdata(100);
	b.setdata(200);
	c.setdata(300);

	a.printdata();
	b.printdata();
	c.printdata();	//0으로 초기화된 count를 공통으로 소유-> 3번 증가 count==3 


	item::setcount(100);
	item::printcount();	//정적 멤버 함수는 이처럼 객체없이 클래스에서 불러와서 사용가능하다.

	return 0;
}