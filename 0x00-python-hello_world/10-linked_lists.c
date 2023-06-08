#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all the elements in listint_t list
 * @h: ptr head of list
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n;
	/* num of nodes */
	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}

/**
 * add_nodeint - add new node at the beginnin of listint_t list
 * @head: ptr to ptr of start list
 * @n: int to include in node
 * Return: addres of new element or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_listint - free listint_t list
 * @head: ptr to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
