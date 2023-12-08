#include "lists.h"

/**
 * add_dnodeint - adds new head to dlist
 * @head: pointer to current node
 * @n: int field of new note
 *
 * Return: new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new = malloc(sizeof(dlistint_t));

        if (!head || !new)
                return (new ? free(new), NULL : NULL);

        new->n = n;
        new->prev = NULL;
        if (!*head)
        {
                *head = new;
                new->next = NULL;
        }
        else
        {
                new->next = *head;
                (*head)->prev = new;
                *head = new;
        }
        return (new);
}
