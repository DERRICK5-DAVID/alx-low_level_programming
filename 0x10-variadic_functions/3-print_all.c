#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_all - function prints anything
 * @format: pointer to format
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i;
	float f;
	char c;
	int flag;
	unsigned int j;

	j = 0;
	flag = 0;

	va_start(args, format);

	while (format && format[j])
	{
	flag = 0;
	switch (format[j])
	{
	case 'c':
		c = va_arg(args, int);
		printf("%c", c);
		break;
	case 'i':
		i = va_arg(args, int);
		printf("%d", i);
		break;
	case 'f':
		f = va_arg(args, double);
		printf("%f", f);
		break;
	case 's':
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		} break;
		default:
		flag = 1;
		break;
	}
	if (flag == 0 && format[j + 1] != '\0')
	{
	printf(", ");
	} j++;
	} printf("\n");
	va_end(args);
}
