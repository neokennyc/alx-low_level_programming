
#include "lists.h"
/**
 * listint_len - Calculate size of elements.
 * @head: head node
 * Return: Int
 **/
size_t listint_len(const listint_t *head)
{
	const listint_t *tp;
	unsigned int cnr = 0;
	tp = head;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
