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
		cout << "called denstructor" << real << "+" << imag << "i" << endl;
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
	cout << "called constructor" << real << "+" << imag << "i" << endl;
}

complex::complex(complex& input) {
	real = input.real;
	imag = input.imag;
}

int main() {
	complex c1(1.1, 2.2);	//�ڵ����� ������, �Ҹ��ڰ� ȣ��ȴ�.
	complex c2(2.2, 3.3);	//�Ҹ��� ������ ������ ������ �ݴ��̴�.
	{
		cout << "strat inner block" << endl;
		complex c3(3.3, 4.4);
		complex c4(4.4, 5.5);	//inner block�� ���� �Ҹ�ȴ�.
		cout << "end inner block" << endl;
	}
	cout << "restart main block" << endl;
	complex c5(5.5, 6.6);
	cout << "end main block" << endl;
}