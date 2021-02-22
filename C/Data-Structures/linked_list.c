#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
} node;

int main(void)
{
	// List initially not pointing to anything
	node *list = NULL;

	// Add number to list
	node *n;

	for (int i = 0; i < 10; i++)
	{
		n = malloc(sizeof(node));
		if (n == NULL)
		{
			return 1;
		}

		printf("n(%i): ", i);
		scanf("%i", &n->number);
		if (i == 0)
		{
			n->next = NULL;
		}
		else
		{
			n->next = list;
		}

		list = n;
	}

	// Print list items
	for (node *tmp = list; tmp != NULL; tmp = tmp->next)
	{
		printf("%i ", tmp->number);
	}
	printf("\n");

	// Free list
	while (list != NULL)
	{
		node *tmp = list->next;
		free(list);
		list = tmp;
	}
}