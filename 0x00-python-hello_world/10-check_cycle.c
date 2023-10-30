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
	listint_t *current = list;
	void **points;
	int size_buffer = 1024;
	int count_points = 1;
	int i;

	if (!list || !list->next)
		return (0);

	points = malloc(8 * size_buffer);
	if (!points)
		return (-1);

	points[count_points - 1] = list->next;
	current = current->next;

	while (current->next)
	{
		for (i = 0; i < count_points; i++)
		{
			if (current->next == points[i])
			{
				free(points);
				return (1);
			}
		}
		points[count_points] = current->next;
		count_points++;
		current = current->next;
	}

	free(points);
	return (0);
}
