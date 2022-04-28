#include <iostream>
using namespace std;

void swap(int, int);
void pswap(int*, int*);
void rswap(int&, int&);


int main() {
	int num1 = 100;
	int num2 = 200;
	
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	//swap(num1, num2);
	//cout << "���� ����, ������ �״��" << endl;

	rswap(num1, num2);
	cout << " ���۷��� ���� ����, ������ ���Ѵ�" << endl;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;


}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	//�Ϲ� ������ ������ ���־ ���ο����� �߻��ϰ�, main�Լ��� ���������� ���ϱ� ����
}

void pswap(int* a, int* b) {	//call by address
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

void rswap(int& a, int& b) {	//call by ref �̴� �Լ��� �Ű��������� �����ڰ� �������Ƿ�, �׳� ���� ��ü�� �Ѱ��ָ� �ȴ�
	int temp = a;
	a = b;
	b = temp;
	//���۷��� ������ �������ָ�, ���۷��� ������ ����Ű�� ���� ���ϴ°��̹Ƿ�, ������ �߻��Ѵ�.
}