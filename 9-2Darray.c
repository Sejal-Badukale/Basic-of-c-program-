//9.Write a program in C for the subtraction of two matrices.
#include<stdio.h>
int main()
{
int a1[2][2],i,j,a2[2][2],p,q,sub[2][2];
	printf("enter array a1 element:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("\nenter array a2 element:");
	for(p=0;p<2;p++)
	{
		for(q=0;q<2;q++)
		{
			scanf("%d",&a2[p][q]);
		}
	}
	printf("\nArray a1:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
	
		printf("\nArray a2:\n");
	for(p=0;p<2;p++)
	{
		for(q=0;q<2;q++)
		{
			printf("%d ",a2[p][q]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	 {
	sub[i][j]=0;
	  for(j=0;j<2;j++)
	  {
	    sub[i][j] = a1[i][j] - a2[i][j];
	} 
	}
		printf("\nResult of matrix Substraction:\n");
	for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	  	printf("%d ",sub[i][j]);
	  }
	printf("\n");
}
	
	
}
