#include<stdio.h>
#pragma warning(disable:4996)

void main() {
    FILE* fp;
    //file�̶�� ������Ÿ�Կ� ���� �����͸� ������ش�.

    fp = fopen("test.txt", "w");
    //������� test������ ����.

    printf("enster char:");

    char c;
    while ((c = getchar()) != '\n') {
        putc(c, fp);
    }


    fclose(fp);


    fp = fopen("test.txt", "r");

    while ((c = getc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    //EOF�� �ص�������Ϸ� ������ ���� ��Ÿ����.
    /*
    putc('A', fp);
    //���� �ϳ��� ���Ͽ� ���� ��ɾ�
    putc('K', fp);

    */
}