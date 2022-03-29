#include "lists.h"
/**
 * add_node -this is main function
 * @head:this is head funtion
 * @str: this is string
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node;

node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
node->str = strdup(str);
node->len = strlen(str);
node->next = *head;
*head = node;
return (node);
}
