//13.Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter angle=");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("A triangle is a valid traingle");
	}
	else
	{
		printf("A triangle is not a valid triangle");
	}
}
