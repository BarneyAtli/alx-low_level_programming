#include "main.h"
/**
 * main - entry point
 * printing lowercase alphabes 10 times
 *
 */
void print_alphabet_x10(void)

{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (k = 'a'; k <= 'z'; k++)

			_putchar(c);
		_putchar('\n');
	}
}
