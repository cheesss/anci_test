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

int main() {	//virtual을 사용하면 부모클래스가 자식클래스를 가리켜도 자식클래스 멤버를 사용할 수 있게해준다.
	Complex* cp = new Complex;
	delete cp;
}//포인터만 선언하면 객체 공간이 할당되지 않으므로, 선언하는것만으로는 생성자가 호출되지 않는다.