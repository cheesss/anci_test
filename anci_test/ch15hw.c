#include <stdio.h>
#define sphere(r) (4/3*r*r*r*3.14);

main() {
	float a = 5, b = 10, c = 15;
	float sphereA = sphere(a);
	float sphereB = sphere(b);
	float sphereC = sphere(c);
	
	printf("������ 5 10 15\n ���� %f %f %f", sphereA, sphereB, sphereC);
}