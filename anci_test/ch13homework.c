#include<stdio.h>
#include <string.h> 
#pragma warning(disable:4996)

int main() {
	FILE* fp1, * fp2;
	char c[20], file1;

	fp1 = fopen("original.txt", "w");

	printf("원본 파일에 저장할 20자 이내 문장을 입력하시오\n\n");
	while ((file1 = getchar()) != '\n')
		putc(file1, fp1);
	fclose(fp1);


	printf("입력 문장 확인");
	fp1 = fopen("original.txt", "r");
	fgets(c, sizeof(c), fp1);
	printf("%s\n", c);

	printf("입력한 문장 file2에 복사한다.");
	fp2 = fopen("copy.txt", "w");
	for (int i = 0; i <= sizeof(c); i++) {
		putc(c, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}