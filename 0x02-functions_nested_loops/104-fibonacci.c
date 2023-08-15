#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	int i, n = 98;
	unsigned int t1 = 1, t2 = 2, nextTerm;

	printf("Fibonacci Series: ");
	for (i = 1; i <= n; ++i)
	{
	printf("%u", t1);
	if (i != n)
	printf(", ");
	nextTerm = t1 + t2;
	t1 = t2;
	t2 = nextTerm;
	}

	return (0);
}
