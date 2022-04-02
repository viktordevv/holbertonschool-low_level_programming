#include "lists.h"
/**
 * pop_listint - this is main
 * @head: this is head
 * Return: int
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int a;

if (!*head)
return (0);
a = (*head)->n;
new = (*head)->next;
free(*head);
*head = new;

return (a);
}
