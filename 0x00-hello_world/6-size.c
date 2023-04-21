#include <stdio.h>
/**
 * main - entry to program
 *
 * Return: zero if no errors, non-zero if errors
 */
int main(void)
{
	printf("Size of a char: %ld bytes \n", size_of(char));
	printf("Size of an int: %ld bytes \n", size_of(int));
	printf("Size of a long int: %ld bytes \n", size_of(long int));
	printf("Size of a long long int: %ld bytes \n", size_of(long long int));
	printf("Size of a float: %ld bytes \n", size_of(float));
	return(0);
}
