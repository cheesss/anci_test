#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 20; i++) {
		for (int j = 0; j < i; j++) {
			cout << i;
		}
		cout << endl;
	}
}