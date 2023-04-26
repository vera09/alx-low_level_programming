#include "main.h"
/**
 * _islower - checks if the value is lowercase
 * @c the variable to be checkerd
 * Return: One if success, else zero
 */

int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
