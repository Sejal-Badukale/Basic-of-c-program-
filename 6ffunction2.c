//6.Write a program in C to check whether a number is a prime number or not using the function(without argument with return).
#include<stdio.h>
int primenotprime(){
	int n,i,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	 {
	 return 1;
	 }
	 else
	 {
	 	return 0;
	 }
}
int main()
{
	int result=primenotprime();
    if (result == 1) 
	{
        printf("Prime Number");
    }
	else 
	{
        printf("Not a Prime Number");
   	}
	
  
}
