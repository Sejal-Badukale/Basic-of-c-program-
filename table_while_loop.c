//7.Write a program in C to display the multiplication table for a given integer using while loop.
#include<stdio.h>
int main()
{
	int i=1,mul,n;
	printf("Enter n=");
	scanf("%d",&n);
	while(i<=10)
	{
		mul=n*i;
		printf("\n%d  * %d = %d",n,i,mul);
		i++;
	}
}
