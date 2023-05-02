#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Return the number of element in a linked list
 * @h: a pointer to the head of the linked list
 * Return: the number of element in the linked list
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
