//5. Write a program in C to find the sum of the right diagonals of a matrix
#include<stdio.h>
int main()
{
int a1[3][3],i,j,add;
	printf("enter array a1 element:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("\nArray a1:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	 {
	  for(j=0;j<3;j++)
	  {
	  	if(i+j==2)
		  {
	  	add=add+a1[i][j];
	      }
	    
	} 
	}
	printf("addition of right diagonal element: %d",add);
}
