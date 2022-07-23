#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nd
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nd in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *eli, *bun;
size_t nd = 1;

if (head == NULL || head->next == NULL)
return (0);

eli = head->next;
bun = (head->next)->next;

while (bun)
{
if (eli == bun)
{
eli = head;
while (eli != bun)
{
nd++;
eli = eli->next;
bun = bun->next;
}

eli = eli->next;
while (eli != bun)
{
nd++;
eli = eli->next;
}

return (nd);
}

eli = eli->next;
bun = (bun->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nd in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nd, index = 0;

nd = looped_listint_len(head);

if (nd == 0)
{
for (; head != NULL; nd++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < nd; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nd);
}
