//8.Write a program in C to find the square of any number using the function(with argument with return).
#include<stdio.h>
int square(int n)
{
	int sqr;
	if(n>0)
	{
		sqr=n*n;
	}
	return sqr;
}
	int main(){
	int a;		
	printf("Enter number:");
	scanf("%d",&a);
	int result;
	result=square(a);
	printf("Square:%d",result);
	}
