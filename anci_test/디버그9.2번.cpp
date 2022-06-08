#include <iostream>
using namespace std;
int main() {
	int p = 10;
	double q = 20.33;
	int* x = &p;
	double* y = &q;
	y = &q;
	x = &p;
	return 0;
}