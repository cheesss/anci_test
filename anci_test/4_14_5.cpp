#include <iostream>
using namespace std;

int main() {
	int size;

	cout << "����� �Է��Ͻÿ�: ";
	cin >> size;


	int* p;
	//p=(int *)malloc(sizeof(int)*size);
	p = new int[size];	//���� ���� ���

	for (int i = 0; i < size; i++) {
		p[i] = i;		//*(p+i)=i�� ���� �ǹ�
	}

	for (int i = 0; i < size; i++) {
		cout << p[i] << endl;
	}


	//free(p);
	delete[] p ;	//[]�ǹ̴� �������� ��ȯ�Ѵٴ� �ǹ�
}