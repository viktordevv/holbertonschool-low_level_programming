#include "lists.h"

/**
 * delete_nodeint_at_index - this is main
 * @head: this is head
 * @index: this is index
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *next_node;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current_node = *head;
	if (index == 0)
	{
		*head = (*(head))->next;
		free(current_node);
		return (1);
	}
	while (counter < index - 1)
	{
		current_node = current_node->next;
		if (current_node == NULL)
		{
			return (-1);
		}
		counter++;
	}
	next_node = current_node->next;
	current_node->next = next_node->next;
	free(next_node);
	return (1);
}
