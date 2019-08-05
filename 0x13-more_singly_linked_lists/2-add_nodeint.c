#include "lists.h"

/**
 * *add_nodeint - function adds new node to beginning of listint_t list
 *
 *@head: pointer to pointer of head of linked list
 *@n: const int
 *
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newhead = NULL;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL && n != 0)
		return (NULL);
	newhead->n = n;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
