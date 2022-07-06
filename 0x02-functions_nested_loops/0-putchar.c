#include "main.h"
/**
 * main - prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "main.h";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}	
