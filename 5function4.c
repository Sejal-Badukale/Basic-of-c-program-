//5.Write a program in C to check Armstrong number(with argument, with return).
#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
	int sum=0,rem,count=0,org,temp;
	org=n;
	temp=n;
	while(temp!=0)
	{
	temp=temp/10;
	count++;
	}	
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	if(org==sum)
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
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	int result=armstrong(a);
	if(result==1)
	{
		printf("It is a Armstrong Number");	
	}
	else
	{
		printf("It is a not Armstrong Number");		
	}
}

