#include <stdio.h>
#pragma warning(disable: 4996)
#define DEBUG 1
#if DEBUG > 2
#error Undefined DEUG type
#endif
int accum(int, int);

main() {
	int num, times, accm;
	printf("�⺻ ���� �ϳ� �Է�: ");
	scanf("%d", &num);
	printf("���� Ƚ�� �Է�: ");
	scanf("%d", &times);

	accm = accum(num, times);
	printf("��� = %d/n", accum);
}
;
int accum(int num, int times) {
	int i = 0;
	int result = 0;
	int prev = 0;
	for (i = 0; i < times; i++) {
		result += num;
#if DEBUG==1			//����װ� ���ǵǸ� �������� ��µȴ�.
		printf("%d�� �ݺ��� ��� : %d + %d =%6d\n", i, prev, num, result);
#elif DEBUG==2
		printf()
		prev = result;
		num++;
	}
#endif
	return result;
}