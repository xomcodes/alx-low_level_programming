#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{

        int n, last;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */
	if (last > 5)
		 printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (last == 0)
		 printf("Last digit of %d is %d and is 0\n", n, last);
        else if (last < 6 && last != 0)
		 printf("Last digit of %d is %d and is less than 6 and ", n, last);
			printf("not 0\n");
        return (0);
}


