#include <iostream>
using namespace std;

class sample {
	int data;	//private
public:
	void setvalue(int input);		//public member function
	int getvalue() {				//Ŭ���� ���ο� ����, ���� ��� ������ �ڵ����� �ζ��� �Լ��� �ȴ�.
		return data;
	}
};

inline void sample::setvalue(int input) {
	data = input;
}	//���� �Է¹޾�, private ������ data�� �Ҵ����ش�


int main() {
	sample s1;
	s1.setvalue(10);

	cout << s1.getvalue() << endl;

	return 0;
}