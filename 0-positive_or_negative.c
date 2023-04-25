#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main- entry to function
 * return: zero if no errors, non-zero if errors
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n",n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n",n);

	return (0);
}
