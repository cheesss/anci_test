#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 100;

	//int* const iptr = &a;		//constant pointer �ּҰ� ������ ���ȭ �Ѵ�->�ּҰ��� �ٲ� �� �����Ѵ�.

	const int* iptr = &a;		//pointer to constant	*�������� �տ� const�� ���̸� iptr�� ����Ű�� ������ ���ȭ�Ѵ�->a�� ���ȭ, �ּҰ��� �ٲ� �� �ִ�.
								//*iptr = �� �� �ڵ带 �Է��ϸ� ���� �߻�

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "*iptr " << *iptr << endl;

	//iptr = &b;	//���ȭ �� �ּҰ� ���� iptr�� �ٲٷ��Ͽ����Ƿ� �����߻�
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "*iptr " << *iptr << endl;

}