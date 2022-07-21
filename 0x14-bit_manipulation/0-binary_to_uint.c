#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: String representing a binary number
 * Return: The converted number or 0 if b is NULL or if there are chars
 * that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	unsigned int f;
	unsigned int d;
	unsigned int sum;
	unsigned int exp;
	int y;

	y = 2;
	sum = 0;
	exp = 1;
	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++) /*Getting the length of b num*/
		;
	if (a == 1 && (b[0] == '0' || b[0] == '1')) /*Checking single nums*/
		return ((b[0] - 48));
	for (f = 0; b[f] != '\0'; f++) /*Iterating the string*/
	{
		if (b[f] != '0' && b[f] != '1')
			return (0);
		for (d = a - 1; d > 0; d--) /*Calculating the exponent*/
			exp = exp * y;
		sum = sum + (exp * (b[f] - 48)); /*Adding the number*/
		a--;
		exp = 1; /*Reseting the exponent*/
	}
	return (sum);
}
