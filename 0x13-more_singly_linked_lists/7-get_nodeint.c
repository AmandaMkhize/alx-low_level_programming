#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of linked list
* @head: first node in the linked list
* @index: index of the node to return
* Return: NULL if node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp;

for (i = 0, temp = head; temp && i < index; i++, temp = temp->next)

return (temp ? temp : NULL);
}
