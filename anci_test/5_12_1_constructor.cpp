#include <iostream>
using namespace std;

class complex {
	float real;
	float imag;
public:
	complex() {	//����Ʈ���ʹ� ��ȯ�� ���� �� ����, �̸��� Ŭ������� ���ƾ��Ѵ�. ������� ������ �Ϲ������� �����Ϸ��� �����.
		real = 0.0;
		imag = 0.0;	//���� ������� ��ü �ҷ����ڸ��� �ʱ�ȭ�ȴ�.
	}//�ؿ� ����Ʈ���Ͱ� �ִ� ���¿��� �� �����ڸ� ���ָ� complex c1; ���� ������ ����.

	complex(float, float);	//�Ű������� �̿��� ���� �����Ѵ�.
	complex(complex&);		//copy constructor

	~complex() {	//�Ҹ��ڴ� �ߺ� �Ұ�. �� �Ѱ�
		
	}

	void setvalue(float a, float b) {
	real = a;
	imag = b;
	}
	void printvalue() {
		cout << real << "+" << imag << "i" << endl;
	}
};

complex::complex(float real, float imag) {
	this->real = real;
	this->imag = imag;
}

complex::complex(complex& input) {
	real = input.real;
	imag = input.imag;
}

int main() {
	complex c1;	//ù��° ����Ʈ ����Ʈ���͸� �ҷ��´�	(implicit call)
	complex c2(1.3, 3.4);	//�Ű������� �ִ� �ι��� ����Ʈ���Ͱ� �ҷ�������.(implicit call)
	complex c3(c2);	//call copy constructor
	c1.printvalue();
	//c1.setvalue(1.0, 2.0); ����Ʈ���ͷ� ��ü����
	c1 = complex(1.2, 2.0);	//�Ű������� 2���� ����Ʈ���� �� �ҷ��´�. (explicit call)
	c1.printvalue();

	c2.printvalue();

	c3.printvalue();	//c2�� ���� ��� �������� ������ �ȴ�.
}