#include <stdlib.h>

/**
 * **alloc_grid - creates a 2d array of integers
 * @width: width
 * @height: height
 *
 * Return: pointer to the created matrix
 * or NULL for Error
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (k = 0; k <= i; k++)
				free(arr[k]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			arr[i][k] = 0;
		}
	}
	return (arr);
}

