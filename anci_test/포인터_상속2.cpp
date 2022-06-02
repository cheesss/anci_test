#include <iostream>
using namespace std;

class Real {
protected:
	double real;
public:
	void setval(double real) { this->real = real;}
	void display() { cout << "real value: " << this->real << endl;}
};

class Image {
protected:
	double imag;
public:
	void setval(double imag) { this->imag = imag; }
	void display() { cout << "imag value: " << this->imag<<"i"<< endl; }
};

class Complex:public Real,public Image{
public:
	void setval(double real, double imag) {
		this->real = real;
		this->imag = imag;
	}
	void display() {
		cout << "complex value: " << real << "+" << imag << "i" << endl;
	}
};

int main() {
	Complex co;
	co.setval(1.1, 2.2);
	co.display();
	co.Real::display();
	co.Image::display();
}
