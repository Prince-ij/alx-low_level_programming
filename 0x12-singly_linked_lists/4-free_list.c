#include "lists.h"
/**
 * free_list - function
 * @head: param
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(hed->str);
		free(head);
		head = tmp;
	}
}
