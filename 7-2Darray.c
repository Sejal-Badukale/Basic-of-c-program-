//7. Write a program in C to find the sum of all elements of matrix.
#include<stdio.h>
int main()
{
int a1[2][2],i,j,add;
	printf("enter array a1 element:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a1[i][j]);
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
	for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  {
	  add=add+a1[i][j];	
	} 
	}
	printf("addition of all element of matrix :%d",add);
}
