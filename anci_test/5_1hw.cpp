#include <iostream>
using namespace std;
int fun(int count);

int main() {
	int a = 5;
	fun(a);
	return 0;
}

int fun(int count) {
	if (count == 0) {
		cout << count;
	}
	else {
		cout << count << endl;
		fun(--count);
	}
	return 0;
}