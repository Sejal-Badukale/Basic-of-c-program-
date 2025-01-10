//5.Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<stdio.h>
int main()
{
	int i,n,sum=0,avg;
	printf("enter 10 numbers=");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("Sum:%d",sum);
	avg=sum/10;
	printf("\nAverage:%d",avg);
}
