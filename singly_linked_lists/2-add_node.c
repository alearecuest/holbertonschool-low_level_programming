#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 *
 * Description: This function creates a new node, duplicates the string
 *              provided, and adds the new node at the beginning of the list.
 *              The string is duplicated using strdup, and the length of the
 *              string is calculated. If memory allocation fails at any point,
 *              the function returns NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str = 0;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
