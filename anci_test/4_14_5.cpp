#include <iostream>
using namespace std;

int main() {
	int size;

	cout << "사이즈를 입력하시오: ";
	cin >> size;


	int* p;
	//p=(int *)malloc(sizeof(int)*size);
	p = new int[size];	//위와 같은 기능

	for (int i = 0; i < size; i++) {
		p[i] = i;		//*(p+i)=i와 같은 의미
	}

	for (int i = 0; i < size; i++) {
		cout << p[i] << endl;
	}


	//free(p);
	delete[] p ;	//[]의미는 여러개를 반환한다는 의미
}