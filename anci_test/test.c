#include<stdio.h>
#pragma warning(disable:4996)

void main() {
    FILE* fp;
    //file이라는 데이터타입에 파일 포인터를 만들어준다.

    fp = fopen("test.txt", "w");
    //쓰기모드로 test파일을 연다.

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
    //EOF는 앤드오브파일로 파일의 끝을 나타낸다.
    /*
    putc('A', fp);
    //문자 하나를 파일에 쓰는 명령어
    putc('K', fp);

    */
}