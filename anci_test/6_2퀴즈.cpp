#include <iostream>
using namespace std;

class GrandParents {
	int GP_data;
public:
	GrandParents(int);
	void Display();
	friend Parents1;
};

class Parents1 : public GrandParents{
	int P_data;
public:
	Parents1(int, int);
	void Display();
};

GrandParents::GrandParents(int GP_data) {
	this->GP_data = GP_data;
}
Parents1::Parents1(int P_data, int GP_data):GrandParents(GP_data) {
	this->P_data = P_data;
	this->GP_data = GP_data;
}

void GrandParents::Display() {
	cout << "Grand Parents' data: " << GP_data << endl;
}

void Parents1::Display() {
	cout << "Parents' data: " << P_data << endl;
}

int main() {
	GrandParents GP1(10);
	Parents1 P1(10, 20);

	GP1.Display();

	P1.Display();
	P1.GrandParents::Display();
}