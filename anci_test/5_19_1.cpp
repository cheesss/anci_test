#include <iostream>
using namespace std;

class imag;

class complex {
	double real;
	double imag;

public:
	complex() { real = 0; imag = 0;}
	complex(double);
	complex(double real, double imag) { this->real; this->imag = imag;}
	friend ostream& operator<<(ostream&, complex&);

	operator double();

	friend imag::imag(complex);
};

complex::complex(double real) {
	this->real = real;
	this->imag = 0.0;
}

complex::operator double() {
	return this-> real;
}
ostream& operator<<(ostream& dout, complex& input) {
	dout << input.real << "+" << input.imag << "i";
	return dout;
}

class imag {
	double image;
public:
	imag() { image = 0.0; }
	friend ostream& operator<<(ostream&, imag&);
};

imag::imag(complex input) {
	this->image = input.imag;
}

ostream& operator<<(ostream& dout, imag& input) {
	dout <<input.image << "i";
	return dout;
}

int main() {

	complex complex1(1.1, 2.2);
	imag imag1;
	imag1 = complex1;


	complex complex2;
	complex2 = imag1;
}