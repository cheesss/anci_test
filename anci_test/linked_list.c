#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct linked_list {
	int number;
	struct linked_list* next;
};

typedef struct linked_list node;

void main() {
	node* nptr;

	node node1, node2, node3, node4;
	node1.number = 10;
	node2.number = 20;
	node3.number = 30;
	node4.number = 40;

	nptr = &node1;

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = NULL;

	/*
	printf("���1�� ����: %d\n, ���1�� �ּ�: %u, ���� ����� �ּ�: %u\n", node1.number, &node1, node1.next);
	printf("���2�� ����: %d\n, ���2�� �ּ�: %u, ���� ����� �ּ�: %u\n", node2.number, &node2, node2.next);
	printf("���3�� ����: %d\n, ���3�� �ּ�: %u, ���� ����� �ּ�: %u\n", node3.number, &node3, node3.next);
	printf("���4�� ����: %d\n, ���4�� �ּ�: %u, ���� ����� �ּ�: %u\n", node4.number, &node4, node4.next);


	printf("���1�� ����: %d\n", node1.number);
	printf("���3�� ���� == node1.next->next->number: %d\n", node1.next->next->number);
	*/

	printf("node1.number == nptr->number : %d\n", nptr->number);
	printf("node3.number == nptr->next->next->number : %d\n", nptr->next->next->number);


}