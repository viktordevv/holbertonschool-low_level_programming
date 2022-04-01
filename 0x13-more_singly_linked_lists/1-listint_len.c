#include "lists.h"
/**
 * listint_len - this is main funtion
 * @h: Node
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}