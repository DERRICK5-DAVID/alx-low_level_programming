100-rot13
#include <stdio.h>
#include "main.h"

/**
* rot13 - funtion encodes a string with rot13
* @s: input string
* Return: encoded string
*/
char *rot13(char *s)
{
int k;

char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = s;

while (*s)
{
for (k = 0; k <= 52; k++)
{
if (*s == rot13[k])
{
*s = ROT13[k];
break;
}
}
s++;
}
return (ptr);
}
