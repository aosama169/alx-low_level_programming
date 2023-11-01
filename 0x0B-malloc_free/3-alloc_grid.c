#include <stdlib.h>

/**
 * **alloc_grid - creates a 2d aray of int
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the created matrix
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	ar = (int **) malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *) malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			free(ar);
			for (k = 0; k <= i; k++)
				free(ar[k]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			ar[i][k] = 0;
		}
	}
	return (ar);
}

