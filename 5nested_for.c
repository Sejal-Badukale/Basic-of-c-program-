/*Q5.write a program in c to print 
54321
54321
54321
54321*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=5;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
