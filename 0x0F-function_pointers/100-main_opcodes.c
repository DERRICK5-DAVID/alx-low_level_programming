#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks code
 * Return: Return 0.
 */

void print_opcodes(void);

int main(int argc, char **argv)
{
	int num_bytes;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}

	printf("%p\n", &print_opcodes);
	print_opcodes();

	return (0);
}

/**
 * print_opcodes - This function prints its own opcodes
 */
void print_opcodes(void)
{
/* This function prints its own opcodes */
	unsigned char *opcodes;
	int i;

	opcodes = (unsigned char *) &print_opcodes;

	for (i = 0; i < sizeof(print_opcodes); i++)
	{
	printf("%.2x ", opcodes[i]);
	}

	printf("\n");
}
