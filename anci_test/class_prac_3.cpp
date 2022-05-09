#include <iostream>
using namespace std;


class mat3 {
	float a[3][3];
public:
	void setmatrix(int, int, float);
	float getmatrix(int, int);
	void printmatrix();
	void transpose();

};

void mat3::setmatrix(int row, int col, float val) {
	a[row][col] = val;
}

float mat3::getmatrix(int row, int col) {
	return a[row][col];
}

void mat3::printmatrix() {
	for (int i = 0; i < 3; i++) {
		cout << "{";
		for (int j = 0; j < 3; j++) {
			cout << "\t" << a[i][j];
		}
		cout << "\t}" << endl;
	}
}

void mat3::transpose() {
	mat3 temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			temp.a[i][j] = a[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = temp.a[j][i];
		}
	}
}

int main() {

	mat3 m1;
	float temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "a{" << i << "}{" << j << "} 를 입력하시오:";
			cin >> temp;
			m1.setmatrix(i, j, temp);
		}
	}
	cout << "row, col값을 입력하시오";
	int row, col;
	cin >> row;
	cin >> col;

	cout << "a{" << row << "}{" << col << "}:" << m1.getmatrix(row, col) << endl;

	m1.printmatrix();

	m1.transpose();

	m1.printmatrix();

	return 0;
}