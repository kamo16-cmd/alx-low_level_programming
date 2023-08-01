#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (temp || !*head)
		return (0);
	
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
