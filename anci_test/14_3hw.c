#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct practice {
	char c;
	struct practice* next;
};

typedef struct practice node;
typedef node* link;


void input(link);
link find(link, char);
link delete(link);
void delete_all(link);
void print(link);

main() {
	link head;
	head = (link)malloc(sizeof(node));
	input(head);

	print(head);

	delete(head);

	print(head);

	printf("리스트 전체를 지우려면 1을 누르십시오\n");
	int i;
	scanf("%d", &i);
	if (i == 1)
	{
		delete_all(head);
		printf("모두 지워졌습니다.");
	}
	else
		printf("리스트를 지우지 않았습니다.");

	free(head);
}


void input(link head) {

	printf("알파벳을 입력하시오, 노드 생성을 완료하려면 E를 입력하시오:");
	scanf("%c", &head->c);
	getchar();

	if (head->c == 'E') {
		head->next = NULL;
	}

	else {
		head->next = (link)malloc(sizeof(node));
		input(head->next);
	}
}


link find(link head, char key) {
	if (head->next->c == key) {
		return(head);
	}
	else if (head->next->next == NULL) {
		return(head);
	}
	else {
		return(find(head->next, key));
	}
}


link delete(link head) {
	char key;
	link n1, p;
	printf("지우고 싶은 알파벳을 입력하시오: ");
	scanf("%c", &key);

	n1 = find(head, key);
	if (n1 == NULL) {
		printf("찾으려는 값이 없습니다.");
	}
	else if (n1->c == key) {
		link p = n1;
		p = n1->next;
		free(n1);
	}
	else {
		p = n1->next->next;
		free(n1->next);
		n1->next = p;
	}
	return(head);
}

void print(link head) {
	if (head != NULL) {
		printf("%c", head->c);
		print(head->next);
	}
}

void delete_all(link head) {
	link s;
	link t = head->next;
	while (t != NULL) {
		s = t;
		t = t->next;
		free(s);
	}
}