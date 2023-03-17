#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenate string
 * @n: unsigned int n
 * @s1: pointer to s1
 * @s2: pointer to s2
 * Return: return result.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = 0, s2_len = 0, i, j;

/* Check for null input strings */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
/* Determine length of the input strings */
	s1_len = strlen(s1);
	s2_len = strlen(s2);
/* If n is greater than s2 length, use entire s2 length */
	if (n >= s2_len)
	{
		n = s2_len;
	}
/* Allocate memory for the concatenated string */
	result = malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
	{
	return (NULL);
	}
/* Copy s1 into the result string */
	for (i = 0; i < s1_len; i++) 
	{
		result[i] = s1[i];
	}
/* Copy n bytes of s2 into the result string */
	for (j = 0; j < n; j++)
	{
		result[i++] = s2[j];
	}
/* Add null terminator to the end of the result string */
	result[i] = '\0';
	return (result);

}
