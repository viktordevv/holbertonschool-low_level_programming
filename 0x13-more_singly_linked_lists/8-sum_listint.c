#include "lists.h"
/**
 * sum_listint - this is main
 * @head: this is head
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int count = 0;
if (!head)
return (0);
while (head)
{
count += head->n;
head = head->next;
}
return (count);
}
