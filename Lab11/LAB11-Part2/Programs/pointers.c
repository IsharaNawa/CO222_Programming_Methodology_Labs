// Memory locations pointers and variables

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node* next;
};

typedef struct node Node;

int main()
{
	int *j;
	printf("Running the simple test for pointers \n");

	j = (int*) malloc(sizeof(int));
	*j = 125;

	printf("Now testing how structs behave\n");

	Node *nodep1, *nodep2 , *nodep3;
	Node node1;


	nodep1 = (Node*) malloc(sizeof(Node));
	nodep2 = (Node*) malloc(sizeof(Node));
	nodep3 = &node1;

	nodep1 -> value = 150;
	nodep2 -> value = 250;
	node1.value = 10;

	nodep3 -> next = nodep1;
	nodep1 -> next = nodep2;

	nodep2->next=NULL;

	printf("Linked list created\n");

	Node * counter;

	for(counter=nodep3;counter!=NULL;counter=counter->next){

        printf("%d\n",counter->value);

	}

	return 0;
}
