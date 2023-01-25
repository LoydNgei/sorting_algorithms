#ifndef SORT_H
#define SORT_H

/* Includes */
#include <stdio.h>
#include <stdlib.h>

/* The doubly linked list Data structure given */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


/* Given print_array.c and print_list.c prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


#endif