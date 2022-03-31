#include<stdio.h>
#include<stdlib.h>
//#pragma warning(disable:4996)

struct node{
	int data;
	struct node* next;
};

void reverse(struct node** head_ref)
{
	struct node* prev = NULL;
	struct node* current = *head_ref;
	struct node* next = NULL;
	while (current != NULL) {
		next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}
	*head_ref = prev;
}

void push(struct node** head_ref, int new_data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void print(struct node* head)
{
	struct node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
	struct node* head = NULL;

	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);

	printf("Given linked list\n");
	print(head);
	reverse(&head);
	printf("\nReversed Linked list \n");
	print(head);
	getchar();
}
