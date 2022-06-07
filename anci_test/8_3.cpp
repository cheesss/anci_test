#include<iostream>
#include <string>
using namespace std;

class staff {
public:
	int code;
	string name;
	void get_info(int a, string b) {
		code = a;
		name = b;
	}
	void print_info(){
		cout << "code:" << code << endl;
		cout << "name:" << name << endl;
	}
};

class teacher : public staff {
public:
	string subject;
	string publication;
	void get_info(string a, string b) {
		subject = a;
		publication = b;
	}
	void print_info() {
		cout << "subject:" << subject << endl;
		cout << "publication:" << publication << endl;
	}
};

class officer : public staff {
public:
	int grade;
	void get_info(int a) {
		grade = a;
	}
	void print_info() {
		cout << "grade:" << grade << endl;
	}
};

class typist :public staff {
public:
	int speed;
	void get_info(int a) {
		speed = a;
	}
	void print_info() {
		cout << "speed:" << speed << endl;
	}
};

class regular : public typist {};

class casual : public typist {
public:
	int daily_wages;
	void get_info(int a) {
		daily_wages = a;
	}
	void print_info() {
		cout << "daily_wages:" << daily_wages << endl;
	}
};

int main() {
	staff S; teacher T; officer O; regular R; casual C;
	S.get_info(1234, "cho");
	S.print_info();
	T.get_info("math", "somewhere");
	T.print_info();
	O.get_info(78);
	O.print_info();
	C.get_info(10);
	C.print_info();
	return 0;
}