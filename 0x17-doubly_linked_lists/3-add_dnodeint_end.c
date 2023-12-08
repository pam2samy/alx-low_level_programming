#include "lists.h"

/**
 * add_dnodeint_end - prints the end of node
 * @head: head of the node
 * @n: number of element
 *
 * Return: Address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *h;
	dlistint_t *new;
	
	new = malloc(sizeof(dlistint_t));

        if (new == NULL)
                return (NULL);

        new-> = n;
        new->next = NULL;

	h = *head;

        if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
        else
        {
                *head = new;
        }

	new->prev = h;

        return (new);
}
