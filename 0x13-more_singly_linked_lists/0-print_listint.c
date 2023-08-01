#include "lists.h"

/**
 * print_listint
 */
size_t print_listint(const listint_t *a)
{
 size_t num = 0;

 while (a)
 {
 printf("%d\n", a->n);
 num++;
 a = a->next;
 }

 return (num);
}

