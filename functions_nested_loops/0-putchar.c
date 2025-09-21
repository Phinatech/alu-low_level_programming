#include "main.h"

/**
 * main - Entry point
 * Description: prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char winners[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(winners[i]);
	}
	_putchar('\n');

	return (0);
}

