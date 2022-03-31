//기본적인 연결리스트를 생성하시오

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct practice {
	int d;
	struct practice* next;
};

typedef struct practice node;
typedef node* link;

void print(link);
void input(link);

main() {
	link head;
	head = (link)malloc(sizeof(node));
	input(head);
	print(head);
}

void input(link head) {

	printf("숫자를 입력하시오, 종료하려면 999를 입력하시오:");
	scanf("%d", &head->d);

	if (head->d == 999) {
		head->next = NULL;
	}

	else {
		head->next = (link)malloc(sizeof(node));
		input(head->next);
	}
	return;
}

void print(link head) {
	if (head->next != NULL) {
		printf("%d --> ", head->d);
		if (head->next->next == NULL) {
			printf("%d",head->next -> d);
		}
		print(head->next);
	}
	return;
}