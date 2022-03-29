#include "lists.h"

/**
 * print_list - this is main funtion
 *
 * @h: this is list h
 * Return: sum
 */

size_t print_list(const list_t *h)
{
    size_t sum = 0;

    while (h)
    {
       if (!h->str)
            printf("[0] (nil)\n");

        else
            printf("[%u] %s\n", h->len, h->str);
              h = h->next;
            sum++;
    }
    return (sum);
}
