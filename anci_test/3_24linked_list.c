#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

typedef char DATA;

struct linked_list {
	DATA d;
	struct linked_list* next;
};

typedef struct linked_list node;
typedef node* LINK;


main() {
	node* head;	//	=	LINK head;	=	struct linked_list *head;

	head = (node*)malloc(sizeof(node));
	head->d = 'A';
	head->next = (LINK)malloc(sizeof(node));
	head->next->d = 'B';
	head->next->next = NULL;

	printf("%c", head->d);
	printf("%c\n", head->next->d);

	//��ȯ�� �ֱٿ� ���� �������� ��ȯ�ؾ��Ѵ�.
	free(head->next);
	free(head);
}