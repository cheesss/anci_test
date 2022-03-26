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
	printf("노드1의 숫자: %d\n, 노드1의 주소: %u, 다음 노드의 주소: %u\n", node1.number, &node1, node1.next);
	printf("노드2의 숫자: %d\n, 노드2의 주소: %u, 다음 노드의 주소: %u\n", node2.number, &node2, node2.next);
	printf("노드3의 숫자: %d\n, 노드3의 주소: %u, 다음 노드의 주소: %u\n", node3.number, &node3, node3.next);
	printf("노드4의 숫자: %d\n, 노드4의 주소: %u, 다음 노드의 주소: %u\n", node4.number, &node4, node4.next);


	printf("노드1의 숫자: %d\n", node1.number);
	printf("노드3의 숫자 == node1.next->next->number: %d\n", node1.next->next->number);
	*/

	printf("node1.number == nptr->number : %d\n", nptr->number);
	printf("node3.number == nptr->next->next->number : %d\n", nptr->next->next->number);


}