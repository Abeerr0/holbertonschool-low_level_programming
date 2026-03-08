#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int i;
	long int s1 = 0, s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += a[i * (size + 1)];
		s2 += a[(i + 1) * (size - 1)];
	}
	printf("%ld, %ld\n", s1, s2);
}
