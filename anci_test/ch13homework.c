#include<stdio.h>
#include <string.h> 
#pragma warning(disable:4996)

int main() {
	FILE* fp1, * fp2;
	char c[20], file1;

	fp1 = fopen("original.txt", "w");

	printf("���� ���Ͽ� ������ 20�� �̳� ������ �Է��Ͻÿ�\n\n");
	while ((file1 = getchar()) != '\n')
		putc(file1, fp1);
	fclose(fp1);


	printf("�Է� ���� Ȯ��");
	fp1 = fopen("original.txt", "r");
	fgets(c, sizeof(c), fp1);
	printf("%s\n", c);

	printf("�Է��� ���� file2�� �����Ѵ�.");
	fp2 = fopen("copy.txt", "w");
	for (int i = 0; i <= sizeof(c); i++) {
		putc(c, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}