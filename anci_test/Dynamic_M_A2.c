#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main() {
	float** mat2d;
	int column, row;

	printf("��Ʈ���� ������ row ���� �Է��϶�\n");
	scanf("%d", &row);

	printf("��Ʈ���� ������ column ���� �Է��϶�\n");
	scanf("%d", &column);

	mat2d = (float**)calloc(row, sizeof(float*));
	//���� �����Ϳ��Դ� �̱� �����͸� �Ҵ� �� �� �ִ�.
	//���� �����Ϳ��� �̱� �����͸� �̿��� ���� �� ������ŭ ���� �ٿ� �̱� ������ �迭 �޸𸮸� �Ҵ��Ѵ�.

	for (int i = 0; i < row; i++)
		mat2d[i] = (float*)calloc(column, sizeof(float));
	//row���� i��° �̱��������� �޸𸮿� floatũ�� ��ŭ�� �޸𸮸� �Ҵ��Ѵ�.
	
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