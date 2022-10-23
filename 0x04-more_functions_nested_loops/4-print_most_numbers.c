#include "main.h"
/**
 * print_most_numbers - print number since 0 up to 9
 *
 * Description: prints the number excluding 2 andd 4
 *
 * Return: The numbers since 0 up to 9
 */
int print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
