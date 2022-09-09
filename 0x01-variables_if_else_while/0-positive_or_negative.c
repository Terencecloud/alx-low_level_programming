#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main(void)
{
int n;
Srand(time(0));
n = rand()-RAND_MAX/2;
if (n>0)
{
	printf("%i is positive\n", n);
}
else if (n==0)
{
	printf("%i is zero\n");
}
else if (n<0)
{
	printf("% is negative", n):
}
return(0);
}
