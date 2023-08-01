#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = prev;
		p = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
