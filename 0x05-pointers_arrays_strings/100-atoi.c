#include "main.h"
#include <stdio.h>
/**
* this program converts a string to an integer.
*
*/
int _atoi(char *m)
{
int index, ind2;
unsigned int res;
int sign = 1;

char now;
index = 0;
res = 0;
while (*(m + index) != '\0')
{
now = *(m + index);
if (now == '-')
{
sign *= -1;
}
if (now >= '0' && now <= '9')
{
ind2 = index;
while (*(m + ind2) > 47 && *(m + ind2) < 58)
{
res = (res * 10) + *(m + ind2) - '0';
ind2++;
}
break;
}
index++;
}
if (sign < 0)
res *= sign;
return (res);
}

