#include <stdio.h>
#pragma warning(disable: 4996)

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
#ifdef DEBUG			//����װ� ���ǵǸ� �������� ��µȴ�.
		printf("%d�� �ݺ��� ��� : %d + %d =%6d\n", i, prev, num, result);
#endif
		prev = result;
		num++;
	}
	return result;
}