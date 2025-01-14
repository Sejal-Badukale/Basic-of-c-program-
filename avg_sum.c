//5.Write a program in C to read 10 numbers from the keyboard and find their sum and average using while loop.
#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	float avg;
	printf("Enter 10 number=");
	while(i<=10)
	{
	    scanf("%d",&n);
		sum=sum+i;
		i++;
	}
	printf("Sum of numbers =%d",sum);
    avg=sum/10;
    printf("\nAverage of number=%f",avg);
}
