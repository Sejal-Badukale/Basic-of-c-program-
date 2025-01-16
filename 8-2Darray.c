//8. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
	int arr[2][3],i,j;
	printf("enter array element:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
		printf("Transpose:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
