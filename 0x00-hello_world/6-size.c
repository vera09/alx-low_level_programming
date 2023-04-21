#include <stdio.h>
/**
 * main - entry to program
 *
 * Return: zero if no errors, non-zero if errors
 */
int main(void)
{
	printf("Sizeof a char: %ld byte(s)\n", size_of(char));
	printf("Sizeof an int: %ld byte(s)\n", size_of(int));
	printf("Sizeof a long int: %ld byte(s)\n", size_of(long int));
	printf("Sizeof a long long int: %ld byte(s)\n", size_of(long long int));
	printf("Sizeof a float: %ld byte(s)\n", size_of(float));
	return(0);
}
