#include <iostream>
using namespace std;

int sum(int a, int b, int c) {	//c�� default��	1��
	return(a + b + c);
}

int sum(int a, int b) {		//2��
	return(a + b);
}

/*
float sum(int a, int b) {
	return(a + b);
}					//��ȯ�������δ� �����ε� �����Ұ�
*/

double sum(double a, double b) {		//3��
	return(a + b);
}

int main() {
	int result;
	result = sum(10, 20, 30);	//1�� ȣ��
	cout << "���" << result << endl<< endl;


	result = sum(10, 20);		//2�� ȣ��
	cout << "���" << result << endl;

	result = sum(10.1, 20.3);		//3�� ȣ��
	cout << "���" << result << endl;

	return 0;
}