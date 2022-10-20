#include "lists.h"

/**
* free_list - free the memory allocated to a linked list
* @head: a double pointer to a linked list
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *current;

	while ((!current = head) != NULL)
	{
		head = current->next;
		free(current->str);
		free(current);
	}
}
