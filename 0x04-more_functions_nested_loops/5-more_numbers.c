#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * followed by a new line (\n)
 *
 */

void more_numbers(void)
{
char i;
int j = 0;

for (i = 0; i < 10; i++)
{
for (j = 0; i <= 14; j++)
{
	if (j > 9)

	_putchar('0' + (i / 10));
	_putchar('0' + (i % 10));
}
_putchar('\n');
}
}
