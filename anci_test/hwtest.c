#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

main() {
	int* p;
	p = malloc(sizeof(int));
	*p = 100;
	p = malloc(sizeof(int));
	*p = 100;
	printf("%d",*p);
}