#include "lists.h"

/**
* free_list - free the memory allocated to a linked list
* @head: a double pointer to a linked list
*Return: nothing
*/
void free_list(list_t *head)
{
	list_t *place_holder;

	while (head)
	{
		if (head->str)
			free(head->str);

		place_holder = head;
		head = head->next;

		free(place_holder);
	}
}
