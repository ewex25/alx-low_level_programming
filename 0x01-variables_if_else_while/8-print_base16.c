#include <stdio.h>
/**
 * main - prints numbers
 * Description; prints numbers of base 16 in lowercase
 * Return:0
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
