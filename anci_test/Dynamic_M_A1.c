#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	int* p, * table;
	int size, i;

	printf("���̺��ǻ���� �Է��Ͻÿ�:");

	scanf("%d", &size);

	/*memory allocation �޸� ��������*/

	/*table = (int*)malloc(sizeof(int) * size); */
	//int *�� �̿��Ͽ� ���� �������� table��, ������ �޸� �ּҸ� ����ų �� �ֵ��� �Ѵ�.


	table = (int*)calloc(size, sizeof(int));
	//���� calloc�� ����. �� ����Ʈ��, ��� �����͸� �������� ���Ѵ�.


	printf("\n �޸��� ù��° byte �ּҴ� : %u �̴�.\n", table);

	printf("���̺� �ӿ� ������ �����͸� �Է��϶�\n");

	for (p = table; p < table + size; p++) {
		scanf("%d", p);
	}

	
	printf("����� �޸�\n");  
	/*
	for (p = table; p < table + size; p++)
		printf("%d �� �ּ� %u �� ����Ǿ���.", *p, p);
	//%u�� �̿��ϴ� ������ �ּҴ� unsigned integer �̱� �����̴�.
	*/
	for (i = 0; i < size; i++)
		printf("\ntable[%d] = %d �̰�, table[%d]�� �ּҴ� %u �̴�.\n", i, table[i], i, &table[i]);


	free(table);
	//���̺��� ����Ű�� ���� �Ҵ�� ������ ��ȯ���ش�. 
	//�Ϸ�� ����
}