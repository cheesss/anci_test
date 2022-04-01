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

main() {
	link head;
	head = (link)malloc(sizeof(node));
	input(head);

	delete(head);

	free(head);
}


void input(link head) {

	printf("숫자를 입력하시오, 노드 생성을 완료하려면 E를 입력하시오:");
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
		return(NULL);
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
	getchar();

	n1 = find(head, key);
	if (n1 == NULL) {
		printf("찾으려는 값이 없습니다.");
	}
	else if (head->c == key) {
		head = head->next;
	}
	else {
		p = n1->next->next;
		free(n1->next);
		n1->next = p;
	}
	return(head);
}

