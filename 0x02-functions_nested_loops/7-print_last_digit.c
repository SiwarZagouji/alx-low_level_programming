#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int c = n%10;
	while(c/10 !=0)
	{
		c%=10;
	}
	return (c);
}
