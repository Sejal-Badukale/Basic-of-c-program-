//8.Write a program in C to find the square of any number using the function(with argument without return).
#include<stdio.h>
int square(n)
{
	int sqr;
	if(n>0)
	{
		sqr=n*n;
	}
	printf("Square:%d",sqr);
}
	int main(){
	int a;		
	printf("Enter number:");
	scanf("%d",&a);
	square(a);
		}
