#include <iostream>
using namespace std;

class Real {
protected:
	double real;
public:
	Real() { cout << "real constructor" << endl; }
	virtual ~Real() { cout << "real destrucor" << endl; }	//�ڽ� �Ҹ��ڰ� �ҷ������� ����ϰ� ����� �ֵ��� virtual ���ش�
	void setval(double real) { this->real = real; }
	virtual void display() { cout << "real value: " << this->real << endl; }
};

class Image {
protected:
	double imag;
public:
	Image() { cout << "image constructor" << endl; }
	virtual ~Image() { cout << "image destructor" << endl; }
	void setval(double imag) { this->imag = imag; }
	void display() { cout << "imag value: " << this->imag << "i" << endl; }
};

class Complex :public Real, public Image {
public:
	Complex() { cout << "complex constructor" << endl; }
	~Complex() { cout << "complex destructor" << endl; }
	void setval(double real, double imag) {
		this->real = real;
		this->imag = imag;
	}
	void display() {
		cout << "complex value: " << real << "+" << imag << "i" << endl;
	}
};

int main() {	//virtual�� ����ϸ� �θ�Ŭ������ �ڽ�Ŭ������ �����ѵ� �ڽ�Ŭ���� ����� ����� �� �ְ����ش�.
	Real* rp = new Complex;	//�ҷ��ö��� ��ӹ��� �θ�, �ڽ� Ŭ���� ��� ����
	delete rp;	//��ȯ�Ҷ��� �θ�Ŭ������ ��ȯ -> �������� �����ִ�.
}//�����͸� �����ϸ� ��ü ������ �Ҵ���� �����Ƿ�, �����ϴ°͸����δ� �����ڰ� ȣ����� �ʴ´�.