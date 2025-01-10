//3.c program to print all factors of a number.
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter n=");
   scanf("%d",&n);
   printf("factors of %d is:",n);
   for(i=1;i<=n;i++)
   {
   	if(n%i==0)
   	{
		   printf("%d ",i);
	}
   }
}
