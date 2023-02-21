#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int print_sign(int n)
{
	if(n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if(n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{       
	       	return (1);
                _putchar('-');
	}
}
