#include <iostream>
using namespace std;


//refrence var
int main() {
	int num = 100;
	int* ptr = &num;
	int& rnum = num;	//int Ÿ���� ���۷��� ����	num ������ rnum���ε� ����� �� �ְ����ش�.

	cout << "num: " << num << endl;
	cout << "*ptr:" << *ptr << endl;
	cout << "rnum: " << rnum << endl;
	
	int num2 = 2000;
	rnum = num2;	//�ٸ������� ���۷����ε� ��밡��
	cout << "2nd rnum:" << rnum << endl;
}