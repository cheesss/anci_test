#include <iostream>
using namespace std;

int sum(const int &a, const  int &b, const  int &c) {
	//���۷��� �����ڰ� �پ����Ƿ� main�Լ� ������ ��ȭ�Ѵ�. ��� ���� �ð��� ����ȴ�
	//�ذ���� const�� ���̴°Ŵ�->���� �ٲ� ���� ���� ���� ����

	int sum;
	sum = a + b + c;
	//b = 100;	//&�� ���ٸ� ������ ���纻�� ������ ������ main�Լ��� ���� ��ȭ�� ����.
				//const�� ���̰� ������ ��ȭ��Ű���ϸ� �����߻�

	return sum;
}

int main() {
	int n1, n2, n3, result;
	n1 = 10;
	n2 = 20;
	n3 = 30;
	result = sum(n1, n2, n3);		//call by value
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "n3:" << n3 << endl;

	cout << "���" << result << endl;
	return 0;
}