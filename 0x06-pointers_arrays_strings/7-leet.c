#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * leet - a function that capitalizes all words of a string
 * @str: pointer to str
 * Return: return str
 */
char *leet(char *str)
{
	int i, j;
	char *result = malloc(strlen(str) + 1);
	if (result == NULL) {
		fprintf(stderr, "Out of memory\n");
		exit(1);
	}
	for (i = 0, j = 0; str[i] != '\0'; i++, j++) {
		switch (str[i]) {
			case 'a':
			case 'A':
				result[j] = '4';
				break;
			case 'e':
			case 'E':
				result[j] = '3';
				break;
			case 'o':
			case 'O':
				result[j] = '0';
				break;
			case 't':
			case 'T':
				result[j] = '7';
				break;
			case 'l':
			case 'L':
				result[j] = '1';
				break;
			default:
			result[j] = str[i];
				break;
		}
	}
	result[j] = '\0';
	return result;
}

