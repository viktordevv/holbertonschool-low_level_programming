#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: cabecera
 * @n: entero
 * Return: new output of the element, or null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;

node = malloc(sizeof(listint_t));
if (node == NULL)
{
return (NULL);
}
if (head == NULL)
{
return (NULL);
}
node->n = n;
node->next = *head;
*head = node;
return (node);
}