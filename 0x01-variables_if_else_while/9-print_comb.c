#include <stdio.h>
/**
 * main - prints all possible combinations of single digit nums
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		putchar(44);
		i++;
	}
	putchar('\n');
	return (0);
}

