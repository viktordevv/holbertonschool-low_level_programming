#include "lists.h"
#include <string.h>
/**
 * add_node_end - this is main funtion
 * @head: this is head
 * @str: this is string
 * Return: NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodo;
	list_t *last = *head;

	nodo = malloc(sizeof(list_t));
	if (nodo == NULL)
	return (NULL);
	nodo->str = strdup(str);
	nodo->len = strlen(str);
	nodo->next = NULL;
	if (*head == NULL)
	{
	*head = nodo;
	return (nodo);
	}
	while (last->next != NULL)
	last = last->next;
	last->next = nodo;
	return (nodo);
}