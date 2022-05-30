#include <iostream>
#include <string>
using namespace std;

class String {
	
public:
	string a;

	String() {
		a = "";
	}
	String(string h) {
		a = h;
	}
	void add(String A, String B);
};
void String::add(String A, String B) {
	this->a = A.a + B.a;
}
int main() {
	string h;
	cout << "문장을 입력하시오:";
	cin >> h;
	String one, two(h), three;
	one = two;
	three.add(one, two);
	cout << three.a;
}