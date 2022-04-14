#include <iostream>
using namespace std;



struct linked_list {
	int data;
	linked_list* next;
};

typedef linked_list node;
typedef linked_list* link;
void printnode(link);

int main() {
	link head;
	head = new node;
	head->data = 10;
	head->next = new node;
	head->next->data = 20;
	head->next->next = new node;
	head->next->next->data = 30;
	head->next->next->next = NULL;

	printnode(head);

	delete head->next->next;
	delete head->next;
	delete head;

}

void printnode(link head) {
	if (head != NULL) {
		cout << head->data;
		if (head->next != NULL)
			cout << "=>";
		printnode(head->next);
	}
	else {
		cout << endl;
	}
}