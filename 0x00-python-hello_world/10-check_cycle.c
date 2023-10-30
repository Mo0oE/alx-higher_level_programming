#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - function to check if there is a cycle in list
 * @list: the list to be checked
 * Return: 0 if no cycle found and 1 otherwise
*/

int check_cycle(listint_t *list)
{
	listint_t *rabbit = list, *turtle = list;

	while (rabbit && rabbit->next)
	{
		turtle = turtle->next;
		rabbit = rabbit->next->next;
		if (rabbit == turtle)
			return (1);
	}
	return (0);
}
