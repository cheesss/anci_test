#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	FILE* fp;
	char str1;

	printf("아스키 코드로 변환할 문장을 입력하시오\n");
	fp = fopen("asci_trens.txt", "w");
	while ((str1 = getchar()) != '\n')
		putc(str1, fp);
	fclose(fp);


	fp = fopen("asci_trens.txt", "r");
	char c;
	printf("아스키코드로 변환\n");
	while ((c = getc(fp)) != EOF)
		printf("%d\n",(int)c);
	fclose(fp);
}