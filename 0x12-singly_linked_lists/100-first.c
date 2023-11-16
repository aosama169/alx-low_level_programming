#include <stdio.h>
#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - print sentences before the main function
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	printf("\(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.\)");
}
