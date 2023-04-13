#include <stdlib.h>

/**
 * *_realloc - reallocate memory block
 * @ptr: ptr to the memory previous allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory
 *
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *oldp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	oldp = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = oldp[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = oldp[i];
	}

	free(ptr);
	return (ptr1);
}
