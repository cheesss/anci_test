#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main() {
	float** mat2d;
	int column, row;

	printf("매트릭스 숫자의 row 값을 입력하라\n");
	scanf("%d", &row);

	printf("매트릭스 숫자의 column 값을 입력하라\n");
	scanf("%d", &column);

	mat2d = (float**)calloc(row, sizeof(float*));
	//더블 포인터에게는 싱글 포인터만 할당 할 수 있다.
	//더블 포인터에게 싱글 포인터를 이용해 가로 줄 개수만큼 각각 줄에 싱글 포인터 배열 메모리를 할당한다.

	for (int i = 0; i < row; i++)
		mat2d[i] = (float*)calloc(column, sizeof(float));
	//row개의 i번째 싱글포인터의 메모리에 float크기 만큼의 메모리를 할당한다.
	
	int temp = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			mat2d[i][j] = temp;
			temp++;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			printf("%10f", *(*(mat2d + i) + j));
		}
		printf("\n");
	}

	for (int i = 0; i < row; i++)
		free(mat2d[i]);
	free(mat2d);
}