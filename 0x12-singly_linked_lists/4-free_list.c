#include "lists.h"

/**
 * free_list - this is main
 * @head: this is head
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *actual;

	for (actual = head; actual; actual = head)
	{
		head = head->next;
		free(actual->str);
		free(actual);
	}
}