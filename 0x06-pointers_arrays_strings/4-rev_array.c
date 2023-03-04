#include <stdio.h>
#include <ctype.h>
/**
 * _strcmp -  compares two strings
 * @str: pointer to str
 * @i: int i
 * Return: return comparison of two strings
 */
char *string_toupper(char *str)
{
	int i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
