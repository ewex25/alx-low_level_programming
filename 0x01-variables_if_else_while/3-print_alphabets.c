#include <stdio.h>
/**
 * main - point out the alphabet
 * Description: print alphabet in both lower and uper case
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	a = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
