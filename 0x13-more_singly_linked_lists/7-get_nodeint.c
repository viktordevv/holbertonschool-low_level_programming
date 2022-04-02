#include "lists.h"

/**
 * get_nodeint_at_index - unction that returns the nth node
 * @head: cabecera
 * @index: unsgined
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int new = 0;

while (head)
{
if (new == index)
return (head);
head = head->next;
new++;
}
return (NULL);
}
