#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	FILE* fp;
	fp = fopen("test.txt", "w");
	int a = 100;
	float b = 23.4;
	char str[10] = "test";

	fprint(fp, "%d %f %s", a, b, str);
	//���Ͽ� ���� ����.

	fclose(fp);
	//------------------�� ���Ͽ� �����͸� �Է��ϰ� fclose�� ���־� ������ ������ ��
	//���� �� ���� ����ؾ��Ѵ�.

	int aa; float bb; char str2[10];

	fp = fopen("test.txt", "r");
	if (fp != NULL) {			//������ ���ȴ��� Ȯ���ϴ� ����
		fscanf(fp, "%d %f %s", &aa, &bb, str2);
		//������ �����͸� �о�´�.
		//�о���� ������ �Է��� ������� �о�;��Ѵ�.

		printf("Load data: %d %f %s ", aa, bb, str2);
		//�о�� �����͸� ����Ѵ�.
	}
	else {
		printf("������ ���� �� �����ϴ�.");
	}

	fclose(fp);
}