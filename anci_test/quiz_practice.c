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

	free(head);
}

void input(link head) {

	printf("���ڸ� �Է��Ͻÿ�, �����Ϸ��� 999�� �Է��Ͻÿ�:");
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
int i = 1;
void print(link head) {
	if (head->next != NULL) {

		printf("%d��° : %d \n", i, head->d);
		if (head->next->next == NULL) {
			printf("%d",head->next -> d);
		}
		i++;
		print(head->next);
	}
	return;
}