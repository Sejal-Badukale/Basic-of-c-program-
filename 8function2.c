//8.Write a program in C to find the square of any number using the function(without argument with return).
#include<stdio.h>
int square()
{
	int n,sqr;
	printf("Enter number:");
	scanf("%d",&n);
	if(n>0)
	{
		sqr=n*n;
		return sqr;
	}
}
	int main(){
		int result;
		result=square();
		printf("Square of is:%d",result);
	}
