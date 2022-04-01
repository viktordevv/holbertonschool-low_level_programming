#include "lists.h"
/**
 * free_listint2 - this is main
 * @head: this is head double **
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
	*head = NULL;
}