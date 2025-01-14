//6.Write a program in C to display the cube of the number up to an integer using while loop.
#include<stdio.h>
int main()
{
	int i=1,cube,n;
	printf("Enter n=");
	scanf("%d",&n);
	while(i<=n)
	{
		cube=i*i*i;
		printf("\nCube of %d =%d",i,cube);
				i++;
	}

}
