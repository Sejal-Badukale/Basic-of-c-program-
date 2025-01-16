//1.Write a program in C for a 2D array of size 3x3 and print the matrix.
#include<stdio.h>
int main()
{
	int arr[3][3],i,j;
	printf("enter array element:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Result:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

