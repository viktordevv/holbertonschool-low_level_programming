#include "function_pointers.h"
/**
 * array_iterator - this is main
 * @array
 * @size
 * @action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int i;

    if (array != NULL && size > 0 && action != NULL)
    {
        void (*p)(int);

        p = action;

        for (i = 0; i < size; i++)
        {
            p(array[i]);
        }
    }
}
