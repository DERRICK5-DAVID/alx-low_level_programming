#include <stdio.h>
/**
 * main - prints all possible combinations of double digit nums
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	/* Loop through all possible values of i and j */
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			/* Print the two digits separated by a comma and a space */
			/*putchar(i + '0');*/
			putchar((char)(i + 48));
			/*putchar(j + '0');*/
			putchar((char)(j + 48));

			/* If this is not the last combination, print a comma and a space */
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	/* Print a newline character */
	putchar('\n');
	return (0);
}

