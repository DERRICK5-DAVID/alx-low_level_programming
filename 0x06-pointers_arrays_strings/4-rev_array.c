#include <stdio.h>
#include <ctype.h>
/**
 * reverse_array -  reverses string
 * @a: pointer to a
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int temp;
	for(int i = 0; i < n/2; i++) {
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
}
