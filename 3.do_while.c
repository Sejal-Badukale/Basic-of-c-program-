////3 Display the sum of first 10 natural numbers using do while loop.
#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
   do
	{
		sum=sum+i;
		i++;
	}while(i<=10);
	printf("Sum of 10 natural numbers =%d",sum);

}
