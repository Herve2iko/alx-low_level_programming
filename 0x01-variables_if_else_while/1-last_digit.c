#include<stdio.h>  
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last=abs(n%10);
	//printf(" n =%d", n);

	if (last>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,last);
	}else if (last==0)
	{
		printf("Last digit of %d is %d and is zero\n", n,last);

	}else
	{
		printf("Last digit of %d is %d and is less than 6\n", n,last);

	}
	return (0);
}