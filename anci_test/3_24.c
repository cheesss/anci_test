#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

typedef char DATA;

struct linked_list {
	DATA d;							//������ ���
	struct linked_list* next;		//�ּ� ���
};

typedef struct linked_list node;
typedef node* LINK;


/*�Լ��� ������Ÿ���� �տ� ����*/
LINK string_input();
int count(LINK);
void print(LINK);
LINK lookup(LINK, DATA);
LINK insert(LINK);


main() {
	LINK head, head2;

	head = string_input();	//������ �ְ�, ��带 �����.

	printf("����� ������ %d �̴�.\n", count(head));

	printf("������ �Է��Ͻÿ� : ");
	print(head);
	printf("\n");

	char ch;
	printf("ã������ ���� �Է��Ͻÿ�:");
	scanf("%c", &ch);
	head2 = lookup(head, ch);
	head2->d = ' ';
	print(head2);
	//printf("ã������ ���ڸ� �Է��Ͻÿ� : ");
	//char c = getchar();
	//printf("ã�� ������ �ּҴ� %p �Դϴ� \n", lookup(head, c));
	insert(head);
	print(head);

}

LINK string_input() {		//�Լ�����, ��ȯ Ÿ�� LINK, �Ѱ��� ��带 ������ش�.
	LINK head;
	char ch;	//DATA ch�� �������
	ch = getchar();

	if (ch == '\n') {	//�Է¹��� ���� ����(�ٹٲ�)�̸�
		return NULL;
	}
	else {
		head = (LINK)malloc(sizeof(node));	//���Ͱ� �ƴҰ�� �����޸� �Ҵ�
		head->d = ch;
		head->next = string_input();		//�ڱ� �Լ� ���ȣ��, ������ �Է� ���� �۾��� �ٽ� �Լ��� �־��ش�.
		return head;

	}
}

int count(LINK head) {		//��� ���� ���� �Լ�
	if (head == NULL) {
		return 0;
	}
	else {
		return(1 + count(head->next));		//ù ��嶧���� 1�� �ϴ� ���ϰ�, ���� ��尡 �ִ��� �ٽ� �����.
	}
}

void print(LINK head){		//��� d�� ����� �� ���
	if (head != NULL) {
		printf("%c", head->d);
		printf(head->next);
	}
	//��尡 ������ ���� NULL�̸� �ƹ��͵� ���ϸ� �ȴ�.
}

LINK lookup(LINK start, DATA ch) {		//������ ������ ���� Ÿ�� LINK�� ��ȯ�Ͽ� ã�� ������ �ּҸ� ��ȯ���ش�. �Է¹��� ch�� ã�� �Լ�.
	if (start == NULL) {
		return NULL;
	}
	else if(ch == start->d){
		return start;		//ã�� ���ڰ� ����� ���� �ּҰ� ��ȯ.
	}
	else{		//��ã�Ҵٸ� ���� ���� �Ѿ��.
		return(lookup(start->next, ch));
	}
}

LINK insert(LINK head) {
	LINK newnode;		//�������� ������ �����Ҵ�
	LINK n1;
	char key, x;			//���� ���ϴ� �����Ͱ� key, �������� �� x

	printf("�������� �� �Է��Ͻÿ� :");
	scanf("%c", &x);
	printf("� �� ������ x�� ������? :");
	scanf("%c", &key);
	getchar();			//dummy getchar ���۶����� �ʿ�
	n1 = lookup(head, key);
	if (n1 == NULL) {
		printf("Ű���� ã�� �� ����.");
	}
	else {
		newnode = (LINK)malloc(sizeof(node));
		newnode->d = x;
		newnode->next = n1->next;		//���� n1->next�� ����Ű������ newnode->next�� ����Ű�� ����
		n1->next = newnode;				//���� �߰��� ��带 ���� n1�� ����Ű�� ���� ����Ű���� ����
	}
	return head;
}