#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	FILE* fp;
	char str1;

	printf("�ƽ�Ű �ڵ�� ��ȯ�� ������ �Է��Ͻÿ�\n");
	fp = fopen("asci_trens.txt", "w");
	while ((str1 = getchar()) != '\n')
		putc(str1, fp);
	fclose(fp);


	fp = fopen("asci_trens.txt", "r");
	char c;
	printf("�ƽ�Ű�ڵ�� ��ȯ\n");
	while ((c = getc(fp)) != EOF)
		printf("%d\n",(int)c);
	fclose(fp);
}