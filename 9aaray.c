//Q.9 Write a program in C to find maximum element.
#include<stdio.h>
int main()
{
	int a[5],max,i;
	printf("Enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		printf("%d",max);
}
