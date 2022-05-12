#include <iostream>//외부에서 구현하는 코드
using namespace std;

class complex {
	float real;
	float imag;
public:
	complex() {	//컨스트럭터는 반환형 가질 수 없고, 이름은 클래스명과 같아야한다. 명시하지 않으면 암묵적으로 컴파일러가 만든다.
		real = 0.0;
		imag = 0.0;	//별도 지정없어도 객체 불려오자마자 초기화된다.
	}//밑에 컨스트럭터가 있는 상태에서 이 생성자를 없애면 complex c1; 이 오류가 난다.

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

	//complex operator++();	//전위 단항연산자는 매개변수 필요없다.
	complex operator++(int);	//후위 단항연산자이다. int 매개변수로 구별

	friend complex operator++(complex&);
	friend complex operator+(complex, complex);

	complex operator-(complex);
};

/*complex complex::operator++() {
	real++;
	imag++;
	return *this;	//나 자신의 값을 반환하겠다.
}*/
complex complex::operator++(int a) {	//int a는 쓸모없는 구별용 매개변수
	complex temp = *this;
	this->real++;
	this->imag++;
	return temp;	//증가시키기 전의 값이 반환되므로 후위연산 효과이다.
}
complex operator++(complex& input) {
	input.real++;
	input.imag++;
	return input;
}	  //레퍼런스 변수여야한다 주의. 그냥 변수를 전해주면 ++효과 없어짐.
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
	//c3 = ++c1; 밑의 코드와 같다
	/*//c3 = c1.operator++();	//c1값 증가 후 c3에 대입
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