#include<stdio.h>
#pragma warning(disable:4996)

void main(int argc, char *argv[]) {
	//�������� �̸� ��ü�� �ƱԸ�Ʈ 1�� �����Ѵ�.
	int i = 0;
	printf("argc: %d\n", argc);

	for (i = 0; i < argv; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	int num1, num2;
	char op;

	if (argv == 4) {
		num1 = atoi(argv[1]);
		//string�� �ִ� ���� ���ڸ� ���ڷ� �ٲپ num1�� �����϶�.
		num2 = atoi(argv[3]);
		op = argv[2][0];
		//NULL���ڵ� ���
		if (op == '+')
			printf("%d + %d = %d\n", num1, num2, num1 + num2);
		else if(op == '-')
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
	}
	else {
		printf("��� �Ұ���");
	}
}