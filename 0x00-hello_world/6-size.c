#include <stdio.h>
/**
 * main - entry to program
 *
 * Return: zero if no errors, non-zero if errors
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", size_of(char));
	printf("Size of an int: %ld byte(s)\n", size_of(int));
	printf("Size of a long int: %ld byte(s)\n", size_of(long int));
	printf("Size of a long long int: %ld byte(s)\n", size_of(long long int));
	printf("Size of a float: %ld byte(s)\n", size_of(float));
	return(0);
}
