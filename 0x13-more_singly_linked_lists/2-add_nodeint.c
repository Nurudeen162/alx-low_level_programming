#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add a new node at the  begining of listint_t list
 * @n: an integer value to be stored in the mew load
 * @head: a pointer to pointer to the head of the link room
 *
 * Return: the address of the  new node or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node =  malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
