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
	sample s1;		//sample Ÿ���� ��ü ����
	sample s2;

	//s1.data = 10;		private �����̱⶧���� �� ���۷����ͷ� ���ٺҰ�

	s1.c = 'A';

	return 0;
}