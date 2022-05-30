#include<iostream>
#include<math.h>
using namespace std;

//polar class
class polarClass
{
public:
	float r, th;
	polarClass() {r = 0; th = 0;}
	polarClass(float a, float b) { r = a; th = b; }
	void show(){cout << "r±ØÁÂÇ¥°è:\n\t r=" << r << " ,theta=" << th;}
};

//rectangular class
class rectangularClass
{
	float x, y;
public:
	rectangularClass() {x = 0; y = 0;}
	rectangularClass(polarClass p){x = p.r * cos(p.th); y = p.r * sin(p.th);}
	void show(){cout << "\n\Rectangular Çü½Ä :\n\tx=" << x << " ,y=" << y;}
};

int main()
{
	polarClass p(1.2, 2.4);
	p.show();
	rectangularClass r;
	r = p;
	r.show();

	return 0;
}