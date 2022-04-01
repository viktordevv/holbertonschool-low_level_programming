#include "lists.h"
/**
 * free_listint - this is main
 * @head: this is head
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
        free(head);
		head = new;
	}
}