#include <stdio.h>
/**
 *main - print the first 50 fibonacci numbers
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;

	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 10)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			print(", %ld", k);
		}
		++i;
	}

	printf("\n");
	return (0);
}
