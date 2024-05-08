#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - single linked list structure
 *
 * @n: Int
 * @index: Index of node in list
 * @next: Pointer to next node
 *
 * Description: single linked list node struct
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Single linked list
 *
 * @n: Int
 * @index: Index of node in list
 * @next: Pointer to next node
 * @express: Pointer to next node
 *
 * Description: singly linked list node struct
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
