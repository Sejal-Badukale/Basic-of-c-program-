//8.Write a program in C to find the square of any number using the function (without argument without return).
#include<stdio.h>
void square()
{
	int n,sqr;
	printf("Enter number:");
	scanf("%d",&n);
	if(n>0)
	{
		sqr=n*n;
		printf("Square of %d is:%d",n,sqr);
	}
}
	int main(){
		square();
	}
