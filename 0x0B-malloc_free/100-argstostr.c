#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of program
 * @av: pointer to pointer to char
 * @ac: int ac
 * Return: return string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;
	int length;
	int index;

	if (ac == 0 || av == NULL)
	{
	return NULL
}
/* Calculate the total length of the concatenated string */
	length = 0;

	for (i = 0; i < ac; i++)
	{
	/* Add 1 for the newline character */
		length += strlen(av[i]) + 1;
	}
/* Allocate memory for the concatenated string */
	str = (char *)malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
/* Concatenate the strings */
	index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(&str[index], av[i]);
		index += strlen(av[i]);
		str[index++] = '\n';
	}
		str[index] = '\0';
		return (str);}
}				
