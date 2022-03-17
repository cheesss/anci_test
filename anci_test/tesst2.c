#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	FILE* fp;
	fp = fopen("test.txt", "w");
	int a = 100;
	float b = 23.4;
	char str[10] = "test";

	fprint(fp, "%d %f %s", a, b, str);
	//파일에 글을 쓴다.

	fclose(fp);
	//------------------꼭 파일에 데이터를 입력하고 fclose를 해주어 파일을 생성한 뒤
	//파일 속 값을 출력해야한다.

	int aa; float bb; char str2[10];

	fp = fopen("test.txt", "r");
	if (fp != NULL) {			//파일이 열렸는지 확인하는 구문
		fscanf(fp, "%d %f %s", &aa, &bb, str2);
		//파일의 데이터를 읽어온다.
		//읽어오는 순서는 입력한 순서대로 읽어와야한다.

		printf("Load data: %d %f %s ", aa, bb, str2);
		//읽어온 데이터를 출력한다.
	}
	else {
		printf("파일을 읽을 수 없습니다.");
	}

	fclose(fp);
}