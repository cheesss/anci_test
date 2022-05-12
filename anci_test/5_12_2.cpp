#include <iostream>
using namespace std;

class complex {
	float real;
	float imag;
public:
	complex() {	//컨스트럭터는 반환형 가질 수 없고, 이름은 클래스명과 같아야한다. 명시하지 않으면 암묵적으로 컴파일러가 만든다.
		real = 0.0;
		imag = 0.0;	//별도 지정없어도 객체 불려오자마자 초기화된다.
	}//밑에 컨스트럭터가 있는 상태에서 이 생성자를 없애면 complex c1; ㄴ이 오류가 난다.

	complex(float, float);	//매개변수를 이용해 위와 구별한다.
	complex(complex&);		//copy constructor

	~complex() {	//소멸자는 중복 불가. 단 한개
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
	complex c1(1.1, 2.2);	//자동으로 생성자, 소멸자가 호출된다.
	complex c2(2.2, 3.3);	//소멸자 순서는 생성자 순서와 반대이다.
	{
		cout << "strat inner block" << endl;
		complex c3(3.3, 4.4);
		complex c4(4.4, 5.5);	//inner block이 먼저 소멸된다.
		cout << "end inner block" << endl;
	}
	cout << "restart main block" << endl;
	complex c5(5.5, 6.6);
	cout << "end main block" << endl;
}