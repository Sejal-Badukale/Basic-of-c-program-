//10.Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5
// using the function (without argument without return).
#include<stdio.h>
void fact()
{
	int arr[5],i,sum=0,j;
	for(i=1;i<=5;i++)
	{
		int fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+(fact/i);
	}
	printf("Sum:%d",sum);
}
int main()
{
	fact();
}
