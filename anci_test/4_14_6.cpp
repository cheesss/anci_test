#include <iostream>
using namespace std;

int main() {
	int row, col;
	cout << "row�� �Է��Ͻÿ�:";
	cin >> row;
	cout << "col�� �Է��Ͻÿ�:";
	cin >> col;


	int** mat2d = new int* [row];
	for (int i = 0; i < row; i++)
		mat2d[i] = new int[col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++){
			cout << "mat2d[" << i << "][" << j << "]";
			cin >> mat2d[i][j];
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << mat2d[i][j] << "\t";		//*(*(mat2d+i)+j) �� ����
		}
		cout << endl;
	}


	//��ȯ
	for (int i = 0; i < row; i++)
		delete[] mat2d[i];

	delete[] mat2d;
}