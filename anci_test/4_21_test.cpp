#include <iostream>
using namespace std;

int main() {
	int row, column;
	cin >> row;
	cin >> column;

	char ** ary = new char* [row];
	for (int i = 0; i < row ; i++) {
		ary[i] = new char[column];
	}
	for (int i = 0; i < row; i++) {                    
		for (int j = 0; j < column; j++) {

			char a;
			cout << "한글자 입력하시오" << endl;
			cin >> a;
			ary[i][j] = a;
		}
	}

	for (int i = 0; i < row; i++) {         
		for (int j = 0; j < column; j++) {
			char *b = &ary[i][j];
			cout << *b << ",";
		}
		cout << '\n';
	}
	for (int i = 0; i < row; i++)
		delete[] ary[i];
	delete[] ary;
}