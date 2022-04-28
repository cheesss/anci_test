#include<stdio.h>
#include "comp.h"

//#define MAX(a, b) a>b?a:b

main() {
	/*int num1, num2, num3;
	num1 = 60;
	num2 = 100;

	num3 = MAX(num1, num2);

	printf("num3: %d\n", num3); */
	float deg1, deg2, deg3, rad1;
	deg1 = 45.0;
	deg2 = 30.0;
	deg3 = ADD(deg1, deg2);
	rad1 = DEG2RAD(deg3);

	printf("°á°ú:%f deg =  %f\n", deg3, rad1);

	printf("PI: %f\n", PI);

#ifdef PI
#undef PI
#define PI 3.141592
#endif
	printf("PI = %f\n", PI);
}
