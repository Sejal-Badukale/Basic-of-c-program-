//3 Display the sum of first 10 natural numbers using while loop.
#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	while(i<=10)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum of 10 natural numbers =%d",sum);

}
