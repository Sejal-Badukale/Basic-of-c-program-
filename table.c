//7.Write a program in C to display the multiplication table for a given integer.
#include<stdio.h>
int main()
{
	int i,n,mul=0;
	printf("enter n numbers=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("%d * %d =%d\n",n,i,mul);
	}
}
