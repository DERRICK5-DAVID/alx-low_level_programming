#include <string.h>
/**
 * rev_string - check the code
 * @s: pointer charater array
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0, j = strlen(s) - 1;
	char tmp;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
