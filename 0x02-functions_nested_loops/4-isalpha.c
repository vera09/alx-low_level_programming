#include "main.h"
/**
 * _isalpha - check if a variable is an alphabet 
 * @c: the variable to be checked
 * Return: 1 if correct, zero if error
int _isalpha(int c)
{
	if (c >= 'A'  && c <= 'Z') || (c >='a' && c <='z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}	
