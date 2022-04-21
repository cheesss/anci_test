#include <iostream>
using namespace std;

int& max(int& a, int& b);		//return by reference ������ ���� ��� ���۷����� �������.

int main() {
	int n1, n2;
	n1 = 10;
	n2 = 20;

	int result = max(n1, n2);	//n2�� ���� �����ؼ� ������ �������̴�.
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "���" << result << endl;

	int& ref = max(n1, n2);	//int &ref==n2
	ref = 100;	//ref�� max�Լ� ��ȯ���� �޾Ҵµ�, �� ���۷����� n2�� ����Ű�� �ֱ� ������ n2�� 100���� �ٲ��.
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "���" << result << endl;
	cout << "ref:" << ref << endl;

	max(n1, n2) = -1;	//return by ref�� �Լ��� ����ó�� ����� �� �ִ�.
	cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;
	cout << "���" << result << endl;
	cout << "ref:" << ref << endl;

	return 0;
}

int& max(int &a, int &b) {
	if (a > b)
		return a;
	else
		return b;
}