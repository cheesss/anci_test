#include <iostream>//�ܺο��� �����ϴ� �ڵ�
using namespace std;

class complex {
	float real;
	float imag;
public:
	complex() {	//����Ʈ���ʹ� ��ȯ�� ���� �� ����, �̸��� Ŭ������� ���ƾ��Ѵ�. ������� ������ �Ϲ������� �����Ϸ��� �����.
		real = 0.0;
		imag = 0.0;	//���� ������� ��ü �ҷ����ڸ��� �ʱ�ȭ�ȴ�.
	}//�ؿ� ����Ʈ���Ͱ� �ִ� ���¿��� �� �����ڸ� ���ָ� complex c1; �� ������ ����.

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

	//complex operator++();	//���� ���׿����ڴ� �Ű����� �ʿ����.
	complex operator++(int);	//���� ���׿������̴�. int �Ű������� ����

	friend complex operator++(complex&);
	friend complex operator+(complex, complex);

	complex operator-(complex);
};

/*complex complex::operator++() {
	real++;
	imag++;
	return *this;	//�� �ڽ��� ���� ��ȯ�ϰڴ�.
}*/
complex complex::operator++(int a) {	//int a�� ������� ������ �Ű�����
	complex temp = *this;
	this->real++;
	this->imag++;
	return temp;	//������Ű�� ���� ���� ��ȯ�ǹǷ� �������� ȿ���̴�.
}
complex operator++(complex& input) {
	input.real++;
	input.imag++;
	return input;
}	  //���۷��� ���������Ѵ� ����. �׳� ������ �����ָ� ++ȿ�� ������.
complex::complex(float real, float imag) {
	this->real = real;
	this->imag = imag;
	cout << "called constructor" << real << "+" << imag << "i" << endl;
}
complex::complex(complex& input) {
	real = input.real;
	imag = input.imag;
}
complex complex::operator-(complex left) {
	complex temp;
	temp.real = real - left.real;
	temp.imag = imag - left.imag;
	return temp;
}
complex operator+(complex left, complex right) {
	complex temp;
	temp.real = left.real + right.real;
	temp.imag = left.imag + right.imag;
	return temp;
}

int main() {
	complex c1(1.0, 2.0);
	complex c2(2.2, 3.3);

	complex c3, c4;
	//c3 = ++c1; ���� �ڵ�� ����
	/*//c3 = c1.operator++();	//c1�� ���� �� c3�� ����
	c3 = operator++(c1);
	cout << "c1:";
	c1.printvalue();
	cout << "c3: ";
	c3.printvalue();

	c4 = c2++;
	cout << "c2:";
	c2.printvalue();
	cout << "c4:";
	c4.printvalue();*/

	c3 = c1 + c2;
	c3 = operator+(c1, c2);
	c3.printvalue();
	c4 = c3 - c1;
	c4.printvalue();
}