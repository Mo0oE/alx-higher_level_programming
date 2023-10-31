#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_node - A function!
 * @head: list
 * @number: the number to stick in
 * Return: a pointer to the new head
*/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *previos, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	current = *head;
	previos = NULL;
	new->n = number;
	new->next = NULL;

	while (current)
	{
		if (number < current->n)
		{
			new->next = current;
			previos->next = new;
			return (new);
		}
		previos = current;
		current = current->next;
	}
	return (NULL);
}
