#include "lists.h"

/**
 * *insert_nodeint_at_index - function inserts new node at given position
 *
 *@head: pointer to pointer of head of linked list
 *@idx: unsigned int index position
 *@n: int data
 *
 * Return: address of new element, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentnode = *head;
	listint_t *newnode =  malloc(sizeof(listint_t));
	newnode->n = n;

	if (head == NULL)
		return (newnode);
	if (idx == 0)
	{
		newnode->next = NULL;
		return (newnode);
	}
	while (currentnode->next != NULL && idx - 1 > 0)
	{
		currentnode = currentnode->next;
		idx--;
	}
	if (currentnode->next == NULL)
		return (NULL);

	newnode->next = currentnode->next;
	currentnode->next = newnode;
	return (newnode);
}
/* 	listint_t *temp = *head; */
/* 	listint_t *newnode = NULL; */
/* 	unsigned int i = 0; */

/* 	while (temp != NULL) */
/* 	{ */
/* 		if (i == idx) */
/* 		{ */
/* 			newnode = malloc(sizeof(listint_t)); */
/* 			if (newnode == NULL) */
/* 				return (NULL); */
/* 			newnode->n = n; */
/* 			i++; */
/* 			newnode->next = temp->next; */
/* 			temp->next = newnode; */
/* 			return (newnode); */
/* 		} */
/* 	} */
/* 	return (NULL); */
/* } */
