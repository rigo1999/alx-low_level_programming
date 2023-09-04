#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
*/
char *_strdup(char *str)
{
	char *new_str;
	int i, len;
	int len = strlen(str) + 1;
	

	if (str == NULL)
		return (NULL);

	//for (i = 0; str[i]; i++)
		//len++;

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];
		
			new_str[len] = '\0';
	return (new_str);
}
