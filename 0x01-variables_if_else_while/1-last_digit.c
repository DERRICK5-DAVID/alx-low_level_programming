#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if number is positve, zero or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        int lastDigit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        printf("Last digit of %d is ", n);

        lastDigit = n % 10; /* This is the last digit*/

        if (lastDigit > 5)
        {
                printf("%d and is greater than 5\n", lastDigit);
        }
        else if (lastDigit == 0)
        {
                printf("%d and is 0\n", lastDigit);
        }
        else
        {
        printf("%d and is less than 6 and not 0\n", lastDigit);
        }
 }
