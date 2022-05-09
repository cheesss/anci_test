#include <iostream>
using namespace std;

int p;
int& display(int&);
int main() {
	display(p) = 5;
	cout << p;
	return 0;
}
int& display(int& p) {
	return p;
}