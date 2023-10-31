#include "lists.h"

/**
 * insert_node - inserts a node in a sorted linked list
 *
 * @head: pointer to the head node
 * @number: number to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *temp, *prev;

	temp = *head;

	if (!new_node)
		return (NULL);

	new_node->n = number;

	if (temp->n > new_node->n)
	{
		new_node->next = temp;
		*head = new_node;

		return (*head);
	}

	while (temp->next)
	{
		prev = temp;
		temp = temp->next;

		if (new_node->n < temp->n)
		{
			prev->next = new_node;
			new_node->next = temp;

			return (new_node);
		}
	}

	new_node->next = NULL;
	temp->next = new_node;

	return (new_node);
}
