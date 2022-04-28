#include <iostream>
using namespace std;

int num = 100;	//global var
int main() {
	{
		int num = 1000;	//local var in inner block
		cout << "num in inner block: " << num << endl;
		cout << "::num in inner block:" << ::num << endl;
	}
	cout << "num in main func:" << num << endl;
	cout << "::num in main func:" << ::num << endl;
}