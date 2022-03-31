#include<stdio.h>
#define PI 3.14

#define MAX(a, b) a>b?a:b

main() {
	int num1, num2, num3;
	num1 = 60;
	num2 = 100;

	num3 = MAX(num1, num2);

	printf("num3: %d\n", num3);
}