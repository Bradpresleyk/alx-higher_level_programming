#include "lists.h"
/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Return: 0 If the function fails or pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if(new_node == NULL)
	{
	return NULL;
	}

	new_node->next = NULL;
	new_node->n = number;

	while (current->next != NULL)
	{
		if (current->n > new_node->n)
		{
			new_node->next = current;
		}
		current = current->next;
	}

	return new_node;
}
