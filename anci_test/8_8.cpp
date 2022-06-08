#include <iostream>
#include <string.h>
using namespace std;

class person {
public:
	string name;
	int code;
};
class account : public person {
public:
	int pay;
};
class admin : public person {
public:
	string experience;
};
class master : public admin , public account{
public:
	master(string a, int b, int c, string d ) {
		account::name = a;
		account::code = b;
		pay = c;
		experience = d;
	}
	void put_data() {
		cout << "name: " << account::name << endl;
		cout << "code: " << account::code << endl;
		cout << "pay: " << pay << endl;
		cout << "experience: " << experience << endl;
	}
};
int main() {
	master M("cho", 1234, 10000, "Good");
	M.put_data();
	return 0;
}