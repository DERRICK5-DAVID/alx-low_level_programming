#include <stdlib.h>
#include <string.h>
/**
 * str_concat -   function concatenates two strings
 * @s1: points to s1
 * @s2: points to s2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}

/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
	{
		s2 = "";
	}

/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

/* If allocation fails, return NULL */
	if (concat == NULL)
	{
		return (NULL);
	}

/* Copy the contents of s1 to the concatenated string */
	strcpy(concat, s1);

/* Append the contents of s2 to the concatenated string */
	strcat(concat, s2);

/* Return the pointer to the concatenated string */
	return (concat);
}
