#include <iostream>
using namespace std;

class vec {
	int size;
	int *data;
public:
	vec();	//default constructor
	vec(int);
	~vec();	//destructor �ȿ� �����޸� ��ȯ�Է�

	void setvalue(int index, int data) {
		this->data[index] = data;
	}
	void printvector() {
		cout << "<";
		for (int i = 0; i < size; i++) {
			cout << data[i] << " ";
		}
		cout << ">" << endl;
	}
};

vec::vec() {
	size = 1;
	data = new int[1];	//dynamic memory allocation
	data[0] = 0;
}
vec::vec(int size) {
	this->size = size;
	data = new int[this->size];
	for (int i = 0; i < size; i++) {
		data[i] = 0;
	}
}

vec::~vec() {
	delete[] data;
	cout << "deallocated dynamic memory" << endl;
}

int main() {
	vec v1(3);	//�Ű������� �Ѱ��� dynamaic constructor ȣ��
	v1.printvector();
	v1.setvalue(0, 10);
	{
		vec v2(5);
		v2.printvector();
	}
	cout<<"restart main" << endl;
	v1.printvector();
}