#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function iterates through the linked list and frees
 *              each node's dynamically allocated memory, including
 *              the duplicated string and the node itself.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
