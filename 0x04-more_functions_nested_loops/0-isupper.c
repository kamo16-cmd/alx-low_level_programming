#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @c: The number to be checked
 *
 * Return: 1 for upper case or 0 for any else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
