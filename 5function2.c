//5.Write a program in C to check Armstrong number(without argument,with return).
#include<stdio.h>
#include<math.h>
int armstrong()
{
	int n,sum=0,rem,count=0,org,temp;
	printf("Enter a number:");
	scanf("%d",&n);
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
	int result=armstrong();
	if(result==1)
	{
		printf("It is a Armstrong Number");	
	}
	else
	{
		printf("It is a not Armstrong Number");		
	}
}

