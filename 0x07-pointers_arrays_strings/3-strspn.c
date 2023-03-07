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

