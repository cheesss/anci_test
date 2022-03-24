#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

typedef char DATA;

struct linked_list {
	DATA d;							//데이터 멤버
	struct linked_list* next;		//주소 멤버
};

typedef struct linked_list node;
typedef node* LINK;


/*함수의 프로토타입을 앞에 정의*/
LINK string_input();
int count(LINK);
void print(LINK);
LINK lookup(LINK, DATA);
LINK insert(LINK);


main() {
	LINK head, head2;

	head = string_input();	//문장을 넣고, 노드를 만든다.

	printf("노드의 개수는 %d 이다.\n", count(head));

	printf("문장을 입력하시오 : ");
	print(head);
	printf("\n");

	char ch;
	printf("찾으려는 문자 입력하시오:");
	scanf("%c", &ch);
	head2 = lookup(head, ch);
	head2->d = ' ';
	print(head2);
	//printf("찾으려는 글자를 입력하시오 : ");
	//char c = getchar();
	//printf("찾는 글자의 주소는 %p 입니다 \n", lookup(head, c));
	insert(head);
	print(head);

}

LINK string_input() {		//함수정의, 반환 타입 LINK, 한개의 노드를 만들어준다.
	LINK head;
	char ch;	//DATA ch도 상관없음
	ch = getchar();

	if (ch == '\n') {	//입력받은 값이 엔터(줄바꿈)이면
		return NULL;
	}
	else {
		head = (LINK)malloc(sizeof(node));	//엔터가 아닐경우 동적메모리 할당
		head->d = ch;
		head->next = string_input();		//자기 함수 재귀호출, 다음에 입력 받은 글씨를 다시 함수에 넣어준다.
		return head;

	}
}

int count(LINK head) {		//노드 개수 세기 함수
	if (head == NULL) {
		return 0;
	}
	else {
		return(1 + count(head->next));		//첫 노드때문에 1을 일단 더하고, 다음 노드가 있는지 다시 세어본다.
	}
}

void print(LINK head){		//노드 d에 저장된 값 출력
	if (head != NULL) {
		printf("%c", head->d);
		printf(head->next);
	}
	//헤드가 저장한 값이 NULL이면 아무것도 안하면 된다.
}

LINK lookup(LINK start, DATA ch) {		//정의한 포인터 변수 타입 LINK를 반환하여 찾는 글자의 주소를 반환해준다. 입력받은 ch를 찾는 함수.
	if (start == NULL) {
		return NULL;
	}
	else if(ch == start->d){
		return start;		//찾던 글자가 저장된 곳의 주소값 반환.
	}
	else{		//못찾았다면 다음 노드로 넘어간다.
		return(lookup(start->next, ch));
	}
}

LINK insert(LINK head) {
	LINK newnode;		//끼워넣을 데이터 동적할당
	LINK n1;
	char key, x;			//내가 원하는 데이터값 key, 끼워넣을 값 x

	printf("끼워넣을 값 입력하시오 :");
	scanf("%c", &x);
	printf("어떤 값 다음에 x를 넣을까? :");
	scanf("%c", &key);
	getchar();			//dummy getchar 버퍼때문에 필요
	n1 = lookup(head, key);
	if (n1 == NULL) {
		printf("키값을 찾을 수 없다.");
	}
	else {
		newnode = (LINK)malloc(sizeof(node));
		newnode->d = x;
		newnode->next = n1->next;		//기존 n1->next가 가리키던곳을 newnode->next도 가리키게 설정
		n1->next = newnode;				//이제 추가된 노드를 기존 n1이 가리키던 곳을 가리키도록 설정
	}
	return head;
}