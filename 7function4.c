//7.Write a program in C to check if a given number is even or odd using the function(with argument with return).
#include<stdio.h>
int evenodd(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
	int main(){
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	int result;
	result=evenodd(a);
    if (result == 1) 
	{
        printf("Entered number is even");
    }
	else 
	{
        printf("Entered number is odd");
   	}
   }
