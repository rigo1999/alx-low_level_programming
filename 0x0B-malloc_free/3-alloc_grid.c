#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **griD;
	int col_index, row_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	griD = malloc(sizeof(int *) * height);

	if (griD == NULL)
		return (NULL);

	for (col_index = 0; col_index < height; col_index++)
	{
		griD[col_index] = malloc(sizeof(int) * width);

		if (griD[col_index] == NULL)
		{
			for (; col_index >= 0; col_index--)
				free(griD[col_index]);

			free(griD);
			return (NULL);
		}
	}

	for (col_index = 0; col_index < height; col_index++)
	{
		for (row_index = 0; row_index < width; row_index++)
			griD[col_index][row_index] = 0;
	}

	return (griD);
}
