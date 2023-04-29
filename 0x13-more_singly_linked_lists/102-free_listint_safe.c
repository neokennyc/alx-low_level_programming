#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *visited[1024] = {NULL};
    size_t count = 0, i;

    if (h == NULL || *h == NULL)
        return (0);

    while (*h != NULL)
    {
        for (i = 0; i < count; i++)
        {
            if (*h == visited[i])
            {
                *h = NULL;
                for (i = 0; i < count; i++)
                    visited[i]->next = NULL;
                return (count);
            }
        }

        visited[count++] = *h;
        *h = (*h)->next;

        if (count >= 1024)
        {
exit(98);
        }
    }

    for (i = 0; i < count; i++)
        free(visited[i]);

    return (count);
}
