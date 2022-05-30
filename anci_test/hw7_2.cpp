#include <iostream>
#include <math.h>
using namespace std;

class polar {
public:
	float x, y;
	float angle = atan(y / x);
	float a = sqrt(x * x + y * y);

	polar(float A, float B) {x = A; y = B;}
	polar(){ x = 0; y = 0; }
	polar operator+(polar one) {
		polar temp;
		temp.x = x + one.x;
		temp.y = y + one.y;
		return temp;
	}
};
int main() {
	polar one(1.2,2.4), two(1.2,3.4), three;
	three = one + two;
	cout <<"°¢µµ:" << three.angle << " a:" << three.a;
	return 0;
}