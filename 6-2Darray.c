//6.Write a program in C to accept two matrices and check whether they are equal.
#include<stdio.h>
int main()
{
int a1[2][2],i,j,a2[2][2],flag;
	printf("enter array a1 element:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("\nenter array a2 element:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a2[i][j]);
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
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a1[i][j]==a2[i][j])
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
			
		}
    }
	  	if(flag==1)
	  	{
	  		printf("Matrix is equal");
		  }
		  else{
		  	printf("Matrix is not equal");
		  }
}

