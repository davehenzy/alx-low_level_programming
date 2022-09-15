#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf(%d is negativen, n);
} else if (n == 0)
{
printf(%d is zeron, n);
} else
{
printf(%d is positiven, n);
}
return (0);
}
