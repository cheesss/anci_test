#include <iostream>
using namespace std;

class sample {
	int data;	//private
public:
	void setvalue(int input);		//public member function
	int getvalue() {				//클래스 내부에 몸통, 정의 모두 넣으면 자동으로 인라인 함수가 된다.
		return data;
	}
};

inline void sample::setvalue(int input) {
	data = input;
}	//값을 입력받아, private 변수인 data에 할당해준다


int main() {
	sample s1;
	s1.setvalue(10);

	cout << s1.getvalue() << endl;

	return 0;
}