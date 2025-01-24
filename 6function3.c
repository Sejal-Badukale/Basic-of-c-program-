//6.Write a program in C to check whether a number is a prime number or not using the function(with argument without return).
#include<stdio.h>
void primenotprime(int n){
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	 {
	 	printf("Prime number");
	 }
	 else
	 {
	 	printf("Not Prime Number");
	 }
}
int main()
{
	int a;
	printf("Enter a=");
	scanf("%d",&a);
    primenotprime(a);	
}
