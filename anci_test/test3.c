#include<stdio.h>
#pragma warning(disable:4996)

void main(int argc, char *argv[]) {
	//실행파일 이름 자체가 아규먼트 1을 차지한다.
	int i = 0;
	printf("argc: %d\n", argc);

	for (i = 0; i < argv; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	int num1, num2;
	char op;

	if (argv == 4) {
		num1 = atoi(argv[1]);
		//string에 있는 숫자 글자를 숫자로 바꾸어서 num1에 저장하라.
		num2 = atoi(argv[3]);
		op = argv[2][0];
		//NULL문자도 고려
		if (op == '+')
			printf("%d + %d = %d\n", num1, num2, num1 + num2);
		else if(op == '-')
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
	}
	else {
		printf("계산 불가능");
	}
}