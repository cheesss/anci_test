#include <stdio.h>
#pragma warning(disable: 4996)

int accum(int, int);

main() {
	int num, times, accm;
	printf("기본 숫자 하나 입력: ");
	scanf("%d", &num);
	printf("반족 횟수 입력: ");
	scanf("%d", &times);

	accm = accum(num, times);
	printf("결과 = %d/n", accum);
}
;
int accum(int num, int times) {
	int i = 0;
	int result = 0;
	int prev = 0;
	for (i = 0; i < times; i++) {
		result += num;
#ifdef DEBUG			//디버그가 정의되면 계산과정이 출력된다.
		printf("%d번 반복된 결과 : %d + %d =%6d\n", i, prev, num, result);
#endif
		prev = result;
		num++;
	}
	return result;
}