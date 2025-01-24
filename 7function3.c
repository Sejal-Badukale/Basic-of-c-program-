//7.Write a program in C to check if a given number is even or odd using the function(with argument without return).
#include<stdio.h>
void evenodd(int n)
{
	if(n%2==0)
	{
		printf("Enter number is even");
	}
	else
	{
		printf("Enter number is odd");
	}
}
	int main(){
	int a;
	printf("Enter number:");
	scanf("%d",&a);
		evenodd(a);
	}
	
