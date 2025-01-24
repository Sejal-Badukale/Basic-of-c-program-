//10.Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5
// using the function (with argument with return).
#include<stdio.h>
int factorial(int n)
{
	int i,sum=0,j;
	for(i=1;i<n;i++)
	{
		int fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+(fact/i);
	}
	return sum;
}
int main()
{
	
	int result;
	result=factorial(6);
	printf("Sum of series:%d",result);
}
