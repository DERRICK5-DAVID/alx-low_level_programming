#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
	printf("%s\n", f);
	}
	return (0);
}


Q3

#include <stdio.h>
/**
 * _strspn -  gets the length of a prefix substring
 * @s: string pointer
 * @accept: character pointer
 * 
 * Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char* ptr = s;
	while (*ptr != '\0' && *accept != '\0')
	{
	if (*ptr == *accept)
	{
		count++;
		accept++;
	} else
	{
		break;
	}
	ptr++;
	}
	return (count);
}
