#include <iostream>
using namespace std;

class Real {
protected:
	double real;
public:
	Real() { cout << "real constructor" << endl; }
	~Real() { cout << "real destrucor" << endl; }
	void setval(double real) { this->real = real; }
	virtual void display() { cout << "real value: " << this->real << endl; }
};

class Image {
protected:
	double imag;
public:
	Image() { cout << "image constructor" << endl; }
	~Image() { cout << "image destructor" << endl; }
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
	Complex co;
	co.setval(1.1, 2.2);
	Complex* cp = &co;
	cp->display();
	//cp->Image::display();
	Real* rp = &co;
	Image* ip = &co;
	rp->display();	//��ӽ����� ��� ��°���	virtual�� �θ� class�� �����Ǿ��ִٸ� �ڽ� Ŭ���� ��� ����ϰ� ���ش�.
	ip->display();

}