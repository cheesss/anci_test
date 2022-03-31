#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

typedef char DATA;
typedef int NUMBER;

struct customer_info {
	DATA name;			
	NUMBER num; //������ ���
	struct customer_info* next;		//�ּ� ���
};

typedef struct customer_info node;
typedef node* LINK;


/*�Լ��� ������Ÿ���� �տ� ����*/
LINK string_input();
int count(LINK);
void print(LINK);
LINK lookup(LINK, DATA);
LINK insert(LINK);
LINK deletenode(LINK);


main() {
	LINK head, head2;

	printf("�̸� ��ȣ �������� �����Ϸ��� �� ������ �Է��Ͻÿ� : ");
	head = string_input();	//������ �ְ�, ��带 �����.
	print(head);
	printf("\n");

	printf("����� �� ���� ������ %d �̴�.\n", count(head));


	char ch;
	printf("ã������ �� �̸��� �Է��Ͻÿ�:");
	scanf("%c", &ch);
	head2 = lookup(head, ch);
	head2->name = ' ';
	print(head2);
	printf("\n");

	insert(head);
	print(head);

	printf("\n\n");
	deletenode(head);
	print(head);

}

LINK string_input() {		//�Լ�����, ��ȯ Ÿ�� LINK, �Ѱ��� ��带 ������ش�.
	LINK head;
	char name[3], num[11];	//DATA ch�� �������
	scanf("%s %s", name, num);

	if ('\n\n') {	//�Է¹��� ���� ����(�ٹٲ�)�̸�
		return NULL;
	}
	else {
		head = (LINK)malloc(sizeof(node));	//���Ͱ� �ƴҰ�� �����޸� �Ҵ�
		head->name = name;
		head->num = num;

		if ('\n') {
			head->next = string_input();		//�ڱ� �Լ� ���ȣ��, ������ �Է� ���� �۾��� �ٽ� �Լ��� �־��ش�.
		}

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

void print(LINK head) {		//��� d�� ����� �� ���
	if (head != NULL) {
		printf("%c", head->name);
		print(head->next);
	}
	//��尡 ������ ���� NULL�̸� �ƹ��͵� ���ϸ� �ȴ�.
}

LINK lookup(LINK start, DATA ch) {		//������ ������ ���� Ÿ�� LINK�� ��ȯ�Ͽ� ã�� ������ �ּҸ� ��ȯ���ش�. �Է¹��� ch�� ã�� �Լ�.
	if (start == NULL) {
		return NULL;
	}
	else if (ch == start->name) {
		return start;		//ã�� ���ڰ� ����� ���� �ּҰ� ��ȯ.
	}
	else {		//��ã�Ҵٸ� ���� ���� �Ѿ��.
		return(lookup(start->next, ch));
	}
}

LINK insert(LINK head) {
	LINK newnode;		//�������� ������ �����Ҵ�
	LINK n1;
	char key, x;			//���� ���ϴ� �����Ͱ� key, �������� �� x

	printf("�������� �� �Է��Ͻÿ� :");
	scanf("%c", &x);
	getchar();

	printf("� �� ������ x�� ������? :");
	scanf("%c", &key);
	getchar();			//dummy getchar ���۶����� �ʿ�
	n1 = lookup(head, key);
	if (n1 == NULL) {
		printf("Ű���� ã�� �� ����.");
	}
	else {
		newnode = (LINK)malloc(sizeof(node));
		newnode->name = x;
		newnode->next = n1->next;		//���� n1->next�� ����Ű������ newnode->next�� ����Ű�� ����
		n1->next = newnode;				//���� �߰��� ��带 ���� n1�� ����Ű�� ���� ����Ű���� ����
	}
	return head;
}

LINK find(LINK head, char key) {
	if (head->next->name == key) {
		return head;
	}
	else if (head->next->next == NULL) {
		return NULL;
	}
	else {
		return(find(head->next, key));
	}
}

LINK deletenode(LINK head) {
	char key;
	LINK n1, p;
	printf("������ �������� �� �̸� �Է��Ͻÿ�:");
	scanf("%s", &key);
	getchar();
	n1 = find(head, key);
	if (n1 == NULL) {
		printf("ã������ ���� ������ ����.");
	}
	else {
		p = n1->next;
		n1->next = p->next;
		free(p);
	}
	return (head);
}