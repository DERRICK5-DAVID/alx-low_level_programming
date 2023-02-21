#include <stdio.h>
/**
 * main - print alphabets in lower case
 * Return: Always 0 (Success)
 */
int main() {
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++) {
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

