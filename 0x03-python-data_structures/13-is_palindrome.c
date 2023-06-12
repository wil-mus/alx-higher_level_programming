#include "lists.h"

/**
 * rev_listint - Reverses singly-linked list.
 * 
 * @head: pointer to the starting node
 *
 * Return: pointer to the head of the reversed list.
 */

listint_t *rev_listint(listint_t **head)
{
	listint_t *nd = *head, *next, *pr = NULL;

	while (nd)
	{
		next = nd->next;
		nd->next = pr;
		pr = nd;
		nd = next;
	}

	*head = pr;
	return (*head);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 *
 * @head: pointer to the head of linked list.
 *
 * Return: If not a palindrome - 0, else 1
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp, *rev, *mid;
	size_t size = 0, a;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	tmp = *head;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}

	tmp = *head;
	for (a = 0; a < (size / 2) - 1; a++)
		tmp = tmp->next;

	if ((size % 2) == 0 && tmp->n != tmp->next->n)
		return (0);

	tmp = tmp->next->next;
	rev = rev_listint(&tmp);
	mid = rev;

	tmp = *head;
	while (rev)
	{
		if (tmp->n != rev->n)
			return (0);
		tmp = tmp->next;
		rev = rev->next;
	}
	rev_listint(&mid);

	return (1);
}
