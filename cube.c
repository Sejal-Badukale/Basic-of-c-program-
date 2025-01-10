//6.Write a program in C to display the cube of the number up to n integer.
#include<stdio.h>
int main()
{
	int i,n,cube;
	printf("enter n numbers=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	cube=i*i*i;
	 printf("cube of %d=%d\n",i,cube);
    }
}

