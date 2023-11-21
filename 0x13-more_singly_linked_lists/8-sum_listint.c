#include "lists.h"

/**
* sum_listint - returns sum of all the data (n) in a linked list
* @head: first node in the linked list
* Return: 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	for (temp = head; temp; temp = temp->next)
{
	sum += temp->n;
}

	return (sum);
}
