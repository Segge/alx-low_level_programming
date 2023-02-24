#include "main.h"
/**
 *reverse_array-function that reverses array of integers
 *@a:array
 *@n: number of elements in array
 *Return:returns void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;


	for (i = 0; i < n--; i++)/* where n-- is also n = n-1*/
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
