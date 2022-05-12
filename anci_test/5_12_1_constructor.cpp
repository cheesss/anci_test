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
	complex c1;	//첫번째 디폴트 컨스트럭터를 불러온다	(implicit call)
	complex c2(1.3, 3.4);	//매개변수가 있는 두번쨰 컨스트럭터가 불러와진다.(implicit call)
	complex c3(c2);	//call copy constructor
	c1.printvalue();
	//c1.setvalue(1.0, 2.0); 컨스트럭터로 대체가능
	c1 = complex(1.2, 2.0);	//매개변수가 2개인 컨스트럭터 를 불러온다. (explicit call)
	c1.printvalue();

	c2.printvalue();

	c3.printvalue();	//c2와 같은 멤버 변수값을 가지게 된다.
}