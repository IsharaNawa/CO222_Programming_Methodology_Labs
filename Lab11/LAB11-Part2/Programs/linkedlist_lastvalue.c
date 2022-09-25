#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	struct node* next;
	int value;
} Node;

int findLastNodeValue(Node* head)
{
	while (head->next != NULL)
	{
		head = head->next;
	}
	return head->value;
}

int main()
{
	Node *node1,*node2;
	node1 = (Node *) malloc(sizeof(Node));
	//node1->value=1;
	node2 = NULL;
	node1->next = node2;
	findLastNodeValue(node1);
	//printf("%d",node1->value);
	//int b=findLastNodeValue(node2);

}
