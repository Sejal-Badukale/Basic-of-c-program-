//7.Write a program in C to check if a given number is even or odd using the function(without argument with return).
#include<stdio.h>
int evenodd()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
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
	int result=evenodd();
    if (result == 1) 
	{
        printf("Entered number is even");
    }
	else 
	{
        printf("Entered number is odd");
   	}
   }
