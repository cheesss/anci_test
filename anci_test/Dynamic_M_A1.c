#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	int* p, * table;
	int size, i;

	printf("테이블의사이즈를 입력하시오:");

	scanf("%d", &size);

	/*memory allocation 메모리 빌려오기*/

	/*table = (int*)malloc(sizeof(int) * size); */
	//int *를 이용하여 정수 포인터인 table이, 빌려온 메모리 주소를 가리킬 수 있도록 한다.


	table = (int*)calloc(size, sizeof(int));
	//위의 calloc과 같다. 몇 바이트씩, 몇개의 데이터를 빌려올지 정한다.


	printf("\n 메모리의 첫번째 byte 주소는 : %u 이다.\n", table);

	printf("테이블 속에 저장할 데이터를 입력하라\n");

	for (p = table; p < table + size; p++) {
		scanf("%d", p);
	}

	
	printf("저장된 메모리\n");  
	/*
	for (p = table; p < table + size; p++)
		printf("%d 는 주소 %u 에 저장되었다.", *p, p);
	//%u를 이용하는 이유는 주소는 unsigned integer 이기 때문이다.
	*/
	for (i = 0; i < size; i++)
		printf("\ntable[%d] = %d 이고, table[%d]의 주소는 %u 이다.\n", i, table[i], i, &table[i]);


	free(table);
	//테이블이 가리키는 곳에 할당된 공간을 반환해준다. 
	//완료된 과제
}