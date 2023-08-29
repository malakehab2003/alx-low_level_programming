#include "lists.h"

/**
 * print_listint_safe - print linked list
 *
 * Return: number of nodes
 *
 * @head: pointer to the first pointer
 *
*/

size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    slow = fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) // Detect loop
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            count++;
            exit(98);
        }
    }

    while (slow != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
    }

    return count;
}

