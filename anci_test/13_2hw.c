#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

main() {
	FILE* fp;
	int c;

	printf("input your name: ");
	fp = fopen("name.txt", "w");
	while ((c = getchar()) != '\n') {
		putc(c, fp);
	}
	fclose(fp);


	printf("\n file storage: ");
	fp = fopen("name.txt", "r");
	while ((c = getc(fp)) != EOF) {
		printf("%c", c);
	}
	fclose(fp);
}