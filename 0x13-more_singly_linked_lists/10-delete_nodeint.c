#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: =======
 * @index: =======
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	while (i < index - 1)
	{
		if (!curr || !(curr->next))
			return (-1);
		curr = curr->next;
		i++;
	}
	current = curr->next;

	curr->next = current->next;
	free(current);
	return (1);
}
