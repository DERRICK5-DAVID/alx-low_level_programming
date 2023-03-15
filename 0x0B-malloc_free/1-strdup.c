#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space
 * @str: pointer to str
 * Return: dup
 */
char *_strdup(char *str)
{
	char *dup;

/* If str is NULL, return NULL */
	if (str == NULL)
	{
	return (NULL);
	}

/* Allocate memory for the duplicate string */
	dup = malloc(sizeof(char) * (strlen(str) + 1));

/* If allocation fails, return NULL */
	if (dup == NULL)
	{
		return (NULL);
	}

/* Copy the string to the newly allocated memory */
	strcpy(dup, str);

/* Return the pointer to the duplicate string */
	return (dup);
}
