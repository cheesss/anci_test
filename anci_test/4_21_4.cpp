#include <iostream>		//�ű��ϴ�!
using namespace std;	//���� ä���� ������~

char& sstring(char input[], int index) {
	return (input[index]);
}

int  main() {
	char name[] = "cho";
	cout << "�̸�:" << name << endl;
	sstring(name, 2)= 'O';	//�̸� ���ڿ��� 3��°�� ���۷����� �ް� ������Ų��

	cout << "�̸�:" << name << endl;

	char& ref = sstring(name, 0);	//�ݵ�� �ʿ�
	ref = 'C';	//""�� ���� �����߻�, ������ �ƴ϶� char ���̱� ����
	cout << "�̸�:" << name << endl;

	return 0;
}